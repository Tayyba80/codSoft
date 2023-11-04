#include<iostream>
#include<conio.h>
#include<windows.h>
#include <cstdlib> 
using namespace std;
int choice;
int generateRandomNumber(int min, int max) 
{
    return min + (rand() % (max - min + 1));
}
void game()
{
	
	int minRange = 1;
    int maxRange = 50;
    int randomNumber = generateRandomNumber(minRange, maxRange);
    
	int guess;
	cout<<"Guess a number between 1-50: "	;
	cin>>guess;
	

		while(true)
		{
			if(guess==randomNumber)
			{
			cout<<"Congratulations you guessed the right number"<<endl;
			break;
			}
		
			if(guess<randomNumber)
			{
				cout<<"Please enter a larger number"<<endl;
				cin>>guess;
				continue;
			}
			if(guess>randomNumber)
			{
				cout<<"Please enter a smaller number"<<endl;
				cin>>guess;
				continue;
			}
			
		}
	
}
int menu()
{
	cout<<"Press '1' to start the game"<<endl;
	cout<<"Press '2' to quit the game"<<endl;
	cout<<"Enter your choice:";
	cin>>choice;
	if(choice==1)
	{
		game();
		cout<<"Press any key to continue"<<endl;
		getch();
	}
	else if(choice==2)
	{
		cout<<"Going to Exit"<<endl;
	}
	else
	{
		cout<<"invalid Input,Try Again"<<endl;
		Sleep(500);
	}

		
}

int main()
{
	while(choice!=2)
	{
		 menu();
	}	
    
}




