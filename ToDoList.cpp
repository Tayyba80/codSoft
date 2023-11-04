#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
#include<vector>
using namespace std;

struct todo
{
	string taskDescription;
	bool isComplete;
};
void addTask(vector<todo> &tasks)
{
	todo newTask;
	cout<<"Enter the task description:"<<endl;
	cin.ignore();
	getline(cin,newTask.taskDescription);
	newTask.isComplete=false;
	tasks.push_back(newTask);
	cout<<"Task is added"<<endl;
	
	cout<<"Press any key to continue";
	getch();
}
void dispayTasks(vector<todo> &tasks)
{
	cout<<"                    "<<"To_Do List"<<endl;
	cout<<endl;
	if(tasks.empty())
	{
		cout<<"Your List is Empty :)"<<endl;
	}
	else
	{
		cout<<"Tasks"<<"                           "<<"Status"<<endl;
		for(int i=0;i<tasks.size();i++)
		{
			cout<<i+1<<"-"<<tasks[i].taskDescription<<"-"<<"              ";
			if(tasks[i].isComplete)
			{
				cout<<"Completed"<<endl;
			}
			else
			{
				cout<<"Remaining"<<endl;
			}
		}
	}

}
void markComplete(vector<todo> &tasks)
{
	dispayTasks(tasks);
	cout<<endl;
	if(!tasks.empty())
	{	
		int num;
		cout<<"Enter the task number to mark as complete: ";
		cin>>num;
		if(num>0 && num<=tasks.size())
		{	
			tasks[num-1].isComplete=true;
			cout<<"Marked as Completed"<<endl;
			
		}
		else
		{
			cout<<"Invalid task number"<<endl;
		}
	}
	
}
void Taskdelete(vector<todo> &tasks)
{
	dispayTasks(tasks);
    cout<<endl;
	if (!tasks.empty()) 
	{
	    int position;
	    cout << "Enter the task number to delete: ";
	    cin >> position;
	    if (position > 0 && position <= tasks.size()) 
		{
	        tasks.erase(tasks.begin() + position - 1);
	        cout << "Task deleted." <<endl;
	    } 
		else 
		{
	        cout << "Invalid task number." << endl;
	    }
	}
	
}

int menu(int &choice,vector<todo> &tasks)
{
		cout << "ToDo List Manager"<<endl;
        cout << "1. Add Task"<<endl;      
        cout << "2. View Tasks"<<endl;    
        cout << "3. Mark Task as Complete"<<endl;
        cout << "4. Delete Task"<<endl;   
        cout << "5. Exit"<<endl;          
        cout << "Enter your choice: ";
        cin >> choice;
        
        if(choice==1)
        {
        	addTask(tasks);
        	system("cls");
		}
		else if(choice==2)
        {
        	 dispayTasks(tasks);
    	 	cout<<"Press any key to continue";
			getch();
        	 system("cls");
		}
		else if(choice==3)
        {
        	markComplete(tasks);
        	cout<<"Press any key to continue";
			getch();
			system("cls");
		}
		else if(choice==4)
        {
        	 Taskdelete(tasks);
        	 cout<<"Press any key to continue";
			getch();
			system("cls");
		}
		else if(choice==5)
        {
        	cout<<"Goint to Exit";
		}
}
int main()
{
	vector<todo> tasks;
	int choice;
	while(choice !=5)
	{
		menu(choice,tasks);
	}
	return 0;
}

