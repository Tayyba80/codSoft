#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;

double calculator()
{
	int num1,num2;
	char op;
	cout<<"Enter number1:"<<endl;
	cin>>num1;
	
	cout<<"Enter number2:"<<endl;
	cin>>num2;
	
	cout<<"Enter operation you want to perform:"<<endl;
	cin>>op;
	
	double result;
	switch(op)
	{
		case '+':
		result=num1+num2;
		break;
		
		case '-':
		result=num1-num2;
		break;
		
		case '*':
		result=num1*num2;
		break;
		
		case '/':
		result=num1/num2;
		if(result ==-1)
		{
			cout<<"Can't Divide these two numbers"<<endl;
		
		}
		break;	
	}
	return result;
}
int menu(int &choice)
{	
	cout<<"Press '1' to start the application"<<endl;
	cout<<"Press '2' to quit the application"<<endl;
	cout<<"Enter your choice:";
	cin>>choice;
	if(choice==1)
	{
		double result= calculator();
	    cout<<"Result:"<<result<<endl;
		cout<<"Press any key to continue";
		getch();
	
	
	}
	else if(choice == 2)
	{
		cout<<"Going to Exit";
		
	}
		else
	{
		 cout << "Invalid Input" << endl;
         cout << "Try Again" << endl;
         Sleep(500);
	}
	system("cls");
}


int main()
{
	int choice;
	while(choice!=2)
	menu(choice);
	
	return 0;
}
