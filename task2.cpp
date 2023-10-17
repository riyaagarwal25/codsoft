#include<iostream>
using namespace std;

int main()
{
	cout<<"SIMPLE CALCULATOR"<<endl;
	double a,b,res;
	int ch;
	do
	{
		cout<<"1=ADDITION"<<endl<<"2=SUBTRACTION"<<endl<<"3=MULTIPLICATION"<<endl<<"4=DIVISION"<<endl<<"5=EXIT"<<endl<<"ENTER YOUR CHOICE"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter two numbers"<<endl;
				cin>>a;
				cin>>b;
				res=a+b;
				cout<<"Result= "<<res<<endl;
				break;
			case 2:
				cout<<"Enter two numbers"<<endl;
				cin>>a;
				cin>>b;
				res=a-b;
				cout<<"Result= "<<res<<endl;
				break;
			case 3:
				cout<<"Enter two numbers"<<endl;
				cin>>a;
				cin>>b;
				res=a*b;
				cout<<"Result= "<<res<<endl;
				break;
			case 4:
				cout<<"Enter two numbers"<<endl;
				cin>>a;
				cin>>b;
				if(b!=0)
				{
					res=a/b;
					cout<<"Result= "<<res<<endl;
				}
				else
					cout<<"Division by zero error"<<endl;
				break;
			case 5:
				exit(0);
			default:
				cout<<"Wrong choice";
		}
	}
	while(1);
	return 0;
	
}
