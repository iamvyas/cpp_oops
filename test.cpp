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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
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
int main() {
    int x,v,w;
    basic_v();
    basic_l();

    return 0;
}