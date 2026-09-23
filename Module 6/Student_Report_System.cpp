#include<iostream>
#include<memory>
using namespace std;

class Student 
{
    public:                    // We have member of dynamic array, static, .....
        int ID;
        string name;
        int number_of_subjects;
        int *marks;
        static int count;

        Student(int ID, string name, int number_of_subjects) // Con initilzes variables & array size
        {
            marks = new int[number_of_subjects];  // Dynamic Array
            this->ID = ID;
            this->name = name;
            this->number_of_subjects = number_of_subjects;
            count++;          // Static variable to count students
        }

        void readMarks()   // Reads marks from user input
        {
            cout<<"Enter "<<number_of_subjects<<" marks"<<endl;

            for(int i=0;i<number_of_subjects;i++)
            {
                cin>>marks[i];
            }
        }

        void results()    // Prints informations
        {
            int sum = 0;
            int highest_mark = marks[0];

            for(int i=0;i<number_of_subjects;i++)
            {
                if(marks[i] > highest_mark)   // To calculate highest mark
                {
                    highest_mark = marks[i];
                }
                sum += marks[i];
            }
            cout<<"ID: "<<ID<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Average Mark: "<< sum / number_of_subjects <<endl;
            cout<<"Highest Mark: "<<highest_mark;
        }
};

int Student::count = 0;  // Static variable

int main()
{
    Student s1(101,"Joby",3);
    s1.readMarks();
    s1.results();
    cout<<"\nNumber of students: "<<Student::count;
return 0;
}