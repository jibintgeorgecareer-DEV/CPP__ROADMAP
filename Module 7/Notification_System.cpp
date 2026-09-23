// Exaplanation is at end of the code
#include<iostream>
#include<string>
#include<functional>
#define DEBUG

void done()
{
    std::cout<<"\nNOTIFICATION MANAGER: Operation Done....";
}

namespace Notification_1
{
    class Manager
    {
        public:

            void sent_email(std::string email, std::string msg, std::function<void()> callback)
            {
                std::cout<<"Email Sent to email "<<email<<std::endl;
                callback();
            }

            void sent_sms(int phone, std::string msg, std::function<void()> callback)
            {
                std::cout<<"Message Sent to number "<<phone<<std::endl;
                callback();
            }

            void sent_push(std::string device, std::string ID, std::string msg, std::function<void()> callback)
            {
                std::cout<<"Message Sent to User ID "<<ID<<std::endl;
                callback();
            }
    };
}; 

int main()
{
#ifdef DEBUG
    std::cout << "DEBUG Running" << std::endl;
#endif

    int choice;
    std::cout<<"----------NOTIFICATION MANAGER-----------\n";
    std::cout<<"1. Email \n 2. SMS \n 3.Push"<<std::endl;
    std::cout<<"Enter Choice:";
    std::cin>>choice;

    Notification_1::Manager man_1;

    if(choice == 1)
    {
        // sent email
        std::string email, msg;
        std::cout<<"Enter Email ID:";
        std::cin>>email;
        std::cout<<"Enter Message:";
        std::cin>>msg;

        man_1.sent_email(email, msg, done);
    }
    else if(choice == 2)
    {
        // sent sms
        std::string msg;
        int phone;
        std::cout<<"Enter Phone Number:";
        std::cin>>phone;
        std::cout<<"Enter Message:";
        std::cin>>msg;
        
        man_1.sent_sms(phone, msg, done);
    }
    else if(choice == 3)
    {
        // sent push
        std::string device, ID, msg;
        std::cout<<"Enter Device:";
        std::cin>>device;
        std::cout<<"Enter User ID:";
        std::cin>>ID;
        std::cout<<"Enter Message:";
        std::cin>>msg;

        man_1.sent_push(device, ID, msg, done);
    }
    else
    {
        // Error input
        std::cout<<"Invalid Input!"<<std::endl;
    }

return 0;
}

// This is a Notification system, We can sent different types of messages such as email,sms,push
// can be sent using the system
// We uses the topics namespaces, std::function, preprocessors
