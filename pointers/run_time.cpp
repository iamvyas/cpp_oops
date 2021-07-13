#include<iostream>
using namespace std;

int main()
{
    short int *data,*head,*temp;
    short int size,i;
    cout<<"give size:";
    cin>>size;
    cout<<endl;
    for(i=0;i<size;i++)
    {
        temp = new short int;
        cin>>*temp;
        data=temp;
        cout<<" mem "<<data<<endl;
        if(i==0)
        {
            head=data;
            cout<<"\nhead val"<<*head<<endl;
        }
        data++;

    }
	cout<<"hello world\n";
    data=head;
    for(i=0;i<size;i++)
    {
        cout<<*data<<" mem "<<data<<endl;
        data++;

    }
	return 0;
}