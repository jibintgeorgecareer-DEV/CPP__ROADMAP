#include<iostream>
#include<string>
#include<fstream>
using namespace std;

// This program is a simple task storage system using C++ file handling.
// It lets you add tasks with details like ID, description, and priority into a text file.
// You can also view all tasks by reading the file line by line.
// It demonstrates how to write and read data using ofstream and ifstream

class Tasks
{
    public:
        int ID;
        string task;
        string description;
        string priority; // 0 - high | 1 - medium | 2 - low
};

class Filestorage : public Tasks
{
    public:

            Filestorage()
            {
                cout<<"============ TASK STORAGE SYSTEM =============="<<endl;
                cout<<"-----------------------------------------------"<<endl<<endl;
            }

    void initilize_task(int ID, string task, string des, string priority)
    {
        Tasks::ID = ID;
        Tasks::task = task;
        Tasks::description = des;
        Tasks::priority = priority;
    }
    
    void add_task()
    {
        ofstream FILE("tasks.txt", ios::app);

        if(!FILE.is_open())
        {
            cerr<<"File Can't Open!"<<endl;
            return;
        }

        FILE << "ID:" << ID;
        FILE << "\nTask:" << task;
        FILE << "\nDescription:" << description;
        FILE << "\nPriority:" << priority;  
        FILE << "\n\n"; 
        
        cout<<"Task '"<<task<<"' added "<<" successfully!"<<endl;
        FILE.close();
    }

    void view_task()
    {
        ifstream FILE("tasks.txt");
        string line;

        if(!FILE.is_open())
        {
            cerr << "File Can't Open!"<<endl;
            return;
        }

        cout<<"========= ALL TASKS ==========="<<endl;

        if(FILE.tellg() == 0)       // tellg() gives position of file pointer
        {
            //cout << "You Have No Tasks..!" <<endl;
        }

            int x = 1;
            while(getline(FILE,line))
            {
                cout << line << endl;
            }
            
        FILE.close();
    }
};

int main()
{
    Filestorage object;
    int ID;
    string task;
    string des;
    int priority;
    int choice;
    cout << "1. Add Task" << endl;
    cout << "2. View Task" << endl;
    cout << "Enter Choice:";
    cin >> choice;

    if(choice == 1)
    {
        cout << "Enter ID:";
        cin >> ID;
        cout << "Enter Task:";
        cin >> task;
        cout << "Enter Description:";
        cin >> des;
        priority = 1;

        object.initilize_task(ID, task, des, "HIGH");
        object.add_task();
    }

    else if(choice == 2)
    {
        object.view_task();
    }

    else
    {
        cerr << "Invalid Choice!" << endl;
    }


return 0;
}