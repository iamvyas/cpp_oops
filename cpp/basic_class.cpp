#include<iostream>
using namespace std;
class basic
{
	int data;

	//by default is private
	void priv_function()
	{
		cout<<"private function getting implemented \n";
	}

	//now we set public here after this any function defined becomes public
	public:

	void fn_outside_class();
	void fn_outside_class2();
	void basic_function()
	{
		cout<<"this is a public function \n";
		priv_function();
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
int main()
{
	class basic x;
	cout<<"you witness a function being called from class a basic \n";
	x.basic_function();
	x.fn_outside_class();
	x.fn_outside_class2();
	return 0;

}
