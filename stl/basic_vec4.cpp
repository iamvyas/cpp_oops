//this program is to use vector and traversing iterator for a user defined variable (struct)
#include<iostream>
#include<vector>
using namespace std;
struct check
{
    /* data */
    int aval;
    int bval;
};

int main()
{
    vector<check> a;
    int n;
    check x;
    cout<<"enter the number of values:";
    cin>>n;
    //now we gonna add values in the vector

    for(int i=0;i<n;i++){
        cout<<"\nenter aval:";
        cin>>x.aval;
        cout<<"\nenter bval:";
        cin>>x.bval;
        a.push_back(x);
    }
    cout<<"\nthe vector is :\n";
    vector<check>::iterator it=a.begin();
    do{
        cout<<it->aval<<"\t"<<it->bval<<"\n";
        it++;
    }while(it!=a.end());
    return 0;
}

/*
SAMPLE IP AND OP:

enter the number of values:5

enter aval:1

enter bval:2

enter aval:3

enter bval:4

enter aval:5

enter bval:6

enter aval:7

enter bval:8

enter aval:9

enter bval:0

the vector is :
1       2
3       4
5       6
7       8
9       0


*/