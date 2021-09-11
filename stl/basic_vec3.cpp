//this program is to check the use of iterator

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    int n,x;
    cout<<"enter the number of values:";
    cin>>n;
    //now we gonna add values in the vector

    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    cout<<"\n the vector is :\n";
    vector<int>::iterator it=a.begin();
    do{
        cout<<*it<<"\n";
        it++;
    }while(it!=a.end());
    return 0;
}

/*
SAMPLE IP AND OP:

enter the number of values:5
5
1
4
3
2

 the vector is :
5
1
4
3
2


*/