#include<iostream>

// A namespace is a container that used to organized related code & prevent name conflicts.
// The main reason is to avoid naming collisions.

namespace name1
{
    int number = 90;    //  Variable 

    void show()         // Funtion
    {
        std::cout<<"Namespace: name1"<<std::endl;
    }

    class Student   // Class
    {
        public:
        std::string name = "Akhil";
    };

}

namespace name2
{
    int number = 100;

    void show()         // Funtion
    {
        std::cout<<"Namespace: name2"<<std::endl;
    }

    class Student   // Class
    {
        public:
        std::string name = "Amal";
    };
}

int main()
{
    // Accessing namespaces,
    
    std::cout<< name1::number << std::endl;  // accesing variables

    std::cout<< name2::show << std::endl;   // accessing functions

    name1::Student object;          // accessing class
    std::cout<< object.name;
}

// Then how we use,
using namespace std;

// The cout, endl, string are comes under std
// using namespace std means,  Make names from std namespace directly  accessable here.