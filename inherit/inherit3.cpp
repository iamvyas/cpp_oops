/*
The subclass that inherits from both classes has storage for both members.

When you access the member, you specify which one you want explicitly.

Get this: the subclass that inherits from both classes inherits ALL of both classes.

The compiler cannot tolerate ambiguity, however. Any access member functions must specify which particular member you are accessing by using the parent::member locator syntax.

Also child classes have no access to parent private members outside of the constructor, or public or protected access member functions in the parent.


(eg)

object.variable -----> this is the noraml way of representing a variable

object.base_class::variable ------> this is how ambiguity is handled by explicitly stated during the expression


*/



#include<iostream>
using namespace std;
class base1{
        public:
		int x;
                void base1fn(){
			x=2;
                        cout<<"\nbase 1 function";

                }
};


class base2{
        public:
		int x;
                void base2fn(){
			x=3;

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
	cout<<" b1 x="<<obj.base1::x;
        obj.base2fn();
	cout<<" b2 x="<<obj.base2::x;
        obj.dirfn();
        return 0;

}

