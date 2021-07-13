//review this program...there is lot not making sense

#include<iostream>
using namespace std;

void printer(char **person ,int n){
	int i;
	cout<<"inside function";
	for(i=0;i<n;i++){

		cout<<endl<<person[i];
	}

}

int main()
{
	cout<<"hello world";
	int i,n=0;
	char *person[100];
	char choice;
	do{
		person[n] = new char[40];
		cout<<"\nenter name:";
		cin>> person[n++];
		cout<<"\nenter another? y/n...";
		cin>>choice;
	}while (choice=='y');

	for(i=0;i<n;i++)
	{
		cout<< endl << person[i];
	}

	//printer(person,n);

	printer(person,n);
	
	return 0;
}