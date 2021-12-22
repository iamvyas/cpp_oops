/*
 * Multiple inheritance on working
 * (i.e) 2 base class and 1 dir class
 */


#include<iostream>
using namespace std;
class base1{ 
	public:
		void base1fn(){
			cout<<"\nbase 1 function";

		}
};


class base2{
	public:
		void base2fn(){

			cout<<"\nbase 2 function";
		}

};


class dir : public base1, public base2{
	public:
		void dirfn(){
			cout<<"\ndir function";
		}

};


int main()
{
	dir obj;
	obj.base1fn();
	obj.base2fn();
	obj.dirfn();
	return 0;

}

