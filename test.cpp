#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q,i;
    cin>>n>>q;
    char line[]="";
    char *tline;
    char *p[100];
    char *z;
    char *head;
    head=p[0];
    for(i=0;i<n+q;i++)
    {
        tline=new char[100];
        cin>>*tline;
        p[i]=tline;
    }
    z=head;
    
    for(i=0;i<n+q;i++)
    {
        cout<<*p<<"\n";
        z++;
    }
    cout<<line;
    return 0;
}