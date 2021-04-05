#include<iostream>
using namespace std;
class basic
{
	int data;

	//by default is private
	void priv_function()
	{
		cout<<"private function getting implemented \n private data:"+ data ;
	}

	//now we set public here after this any function defined becomes public
	public:

	basic()
	{
		data=2;
	}

	void fn_outside_class();
	void fn_outside_class2();

	//friend function declared
	friend void friend_fn();

	void basic_function()
	{
		class basic x;
		cout<<"this is a public function \n";
		priv_function();
	}

	void diplay_priv_var()
	{
		cout<<" private var val displayed in public function "+ data;
	}
};

//function outside class ....its  not inline as functions inside class are inline by default
void basic :: fn_outside_class()
{
	cout<<"fn outside class which is not inline\n";
}

inline void basic :: fn_outside_class2()
{
	cout<<"fn outside class which is inline\n";
	
}

void friend_fn()
{
	class basic x;
	cout<<"this is friend function calling a function it calls a private member below\n";
	x.priv_function();

}
int main()
{
	class basic x;
	cout<<"you witness a function being called from class a basic \n";
	x.basic_function();
	x.fn_outside_class();
	x.fn_outside_class2();
	friend_fn();
	return 0;

}
