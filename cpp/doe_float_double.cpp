/*
float and double are used to store floating-point numbers (decimals and exponentials).
The size of float is 4 bytes and the size of double is 8 bytes. Hence, 
double has two times the precision of float.

float       4byt  -3.4e-38   to -3.4e+38
double      8byt  -1.7e-308  to -1.7e+308
long double 12byt -3.43-4932 to 1.1e+4932

*/


#include<iostream>
using namespace std;

int main()
{
    float area = 134.64534;
    double volume = 134.64534;
    double distance = 45E12;
    long double distance2 = 45E12;
	cout<<"float area is 134.64534 :"<<area<<" size: "<<sizeof(area)<<endl;
    cout<<"double volume is 134.645334 :"<<volume<<" size: "<<sizeof(volume)<<endl;
    cout<<"double distance is 45E12 :"<<distance<<" size: "<<sizeof(distance)<<endl;
    cout<<"long double distance2 is 45E12 :"<<distance2<<" size: "<<sizeof(distance2)<<endl;

	return 0;
}	
