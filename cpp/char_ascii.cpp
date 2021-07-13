#include<iostream>
using namespace std;

int main()
{
    unsigned char i=0;
	cout<<"hello world";
    int x=0;
    for(x=0;x<256;x++)
    {
        cout<<"ascii value of "<<x<<" : "<<i<<endl;
        i++;
    }
	return 0;
}