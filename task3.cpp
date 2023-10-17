#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task 
{
    string desc;
    bool completed;
};

void add(vector<Task>& tasks, const string& desc) 
{
    Task newTask;
    newTask.desc = desc;
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "Task added: " << desc << endl;
}

void view(const vector<Task>& tasks) 
{
    cout << "To-Do List:" << endl;
    for (size_t i = 0; i < tasks.size(); i++) 
	{
        cout << "[" << (tasks[i].completed ? "X" : " ") << "] " << tasks[i].desc << endl;
    }
}

void mark(vector<Task>& tasks, size_t index) 
{
    if (index >= 0 && index < tasks.size()) 
	{
        tasks[index].completed = true;
        cout << "Task marked as completed: " << tasks[index].desc << endl;
    } 
	else 
        cout << "Invalid task index." << endl;
}

void remove(vector<Task>& tasks, size_t index) 
{
    if (index >= 0 && index < tasks.size()) 
	{
        cout << "Task removed: " << tasks[index].desc << endl;
        tasks.erase(tasks.begin() + index);
    } 
	else 
        cout << "Invalid task index." << endl;
}

int main() 
{
    vector<Task> tasks;

    while (true) 
	{
        cout << "To-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
    	cout << "5. Quit" << endl;

        int choice;
        cout << "Enter your choice";
        cin >> choice;

        switch (choice) 
		{
            case 1: 
			{
                cin.ignore();  
                string desc;
                cout << "Enter the task description: ";
                getline(cin, desc);
                add(tasks, desc);
                break;
            }
            case 2:
                view(tasks);
                break;
            case 3: 
			{
                int index;
                cout << "Enter the index of the task to mark as completed: ";
                cin >> index;
                mark(tasks, index - 1);  
                break;
            }
            case 4: 
			{
                int index;
                cout << "Enter the index of the task to remove: ";
                cin >> index;
                remove(tasks, index - 1);  
                break;
            }
            case 5:
                cout << "Goodbye!" << endl;
                return 0;
            default:
                cout << "Wrong choice" << endl;
        }
    }
    return 0;
}

