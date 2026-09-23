#include<iostream>
using namespace std;

class Employee
{
    public:
        int id;
        string name;
        virtual void work() = 0;
        
        Employee(int id, string name)
        {
            this->id = id;
            this->name = name;
        }
};

class Developer : public Employee
{
    public:

        Developer(int id, string name) : Employee(id, name) // This line explaned below
        {

        }
        void work() override
        {
            cout<<"ID: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Role: Developer"<<endl;
            cout<<"Developer is writing code...."<<endl;
            cout<<" "<<endl;
        }
};

class Tester : public Employee
{
    public:
        void work() override
        {
            cout<<"ID: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Role: Tester"<<endl;
            cout<<"Tester is testing software..."<<endl;
            cout<<" "<<endl;
        }

        Tester(int id, string name) : Employee(id, name)  // This line explaned below
        {
                
        }
};

class Manager : public Employee
{
    public:
        void work() override
        {
            cout<<"ID: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Role: Manager"<<endl;
            cout<<"Manager is managing team...."<<endl;
            cout<<" "<<endl;
        }

        Manager(int id, string name) : Employee(id, name)  // This line explaned below
        {
                
        }
};

int main() // Using Run - Time polymorphism
{
    Employee *emp[3];

    Developer dev(89,"Hari");
    Tester tes(101,"Jinu");
    Manager man(67,"Mani");

    emp[0] = &dev;
    emp[1] = &tes;
    emp[2] = &man;

    for(int i=0;i<3;i++)
    {
        emp[i] -> work();
    }

return 0;
}

// Developer(int id, string name) : Employee(id, name)  (Explanation of the code line)

// First part is the Developer constructor with values 'id' & 'name', 
// Second part is the constructor initilizer list, means "Call the Employee constructor with these
// values"

//  Developer constructor
//        ↓
//  Employee(89, "Hari")
//        ↓
//  Employee's id = 89
//  Employee's name = "Hari"
//        ↓
//  Developer is constructed