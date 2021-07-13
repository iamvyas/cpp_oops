#include<iostream>
using namespace std;

int main()
{
	char c='h';
	char *p;
	p=&c;
	cout<<"var to which the pointer is pointed:"<<c<<endl;
	cout<<"dereferenced pointer:"<<*p<<endl;
	return 0;
}	
