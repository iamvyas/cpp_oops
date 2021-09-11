//this program is to verify that vector works on run time

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a={1,3,2,4};
    a.push_back(5);
    int x;
    cout<<"value added last:"<<a[4];
    //now we gonna add value in runtime because vector works in runtime
    cout<<"\n enter some value";
    cin>>x;
    a.push_back(x);
    cout<<"\n last element added by user is:"<<a[5];
    return 0;
}

//next we will be seeing about iterators