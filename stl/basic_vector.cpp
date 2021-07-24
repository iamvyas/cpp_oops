//this program contains the basic representation of vectos and list

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<bits/stdc++.h> 
using namespace std;

void basic_v(){
    vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }; 
    vector<vector<int>> *adj; 
    cout<<vect[1][2]<<endl;
    adj=&vect;
    cout<<*adj[0][0].data();
    return;
}

void basic_l(){
    int V=10;
    list<int> *adj;
    list<int> *adj2;
    list <int> :: iterator it;
    adj = new list<int>[V];
    //adj = new list<int>(V);
    adj[2].push_back(3);
    adj[2].push_back(7);
    adj[2].push_back(10);
    adj[2].push_back(4);
    adj[2].push_back(1);
    adj[2].push_back(11);
    adj[2].push_back(6);
    adj[2].push_back(8);
    adj[2].push_back(11);
    it = adj[2].begin();
    cout<<*it<<endl;
    for(int x=0;x<4;x++)++it;
    cout<<*it<<endl;
    cout<<*it<<endl;
    return;
}

void basic_2(){
    int m=5,n=5,l=5;
    vector <vector <vector <int>>>
            vect( n,
                vector<vector<int>>
                (
                    m,
                    vector<int>(l)
                )

            );
    int count=0;
    for(int i=0;i<5;i++){
        for (int j = 0; j < 5; j++)
        {
            for(int k=0;k<5;k++)
            {
                vect[i][j][k]=count;
                count++;
            }
        }
    }

    for(int i=0;i<5;i++){
        for (int j = 0; j < 5; j++)
        {
            for(int k=0;k<5;k++)
            {
                cout<<vect[i][j][k]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n\n\n\n";
    }
    return ;
}



int main() {
    int x,v,w;
    //vector as normal
    basic_v();
    cout<<endl;
    //list accessed through pointers
    basic_l();
    cout<<endl;
    //3d vector
    basic_2();

    return 0;
}