#include<iostream>
using namespace std;

//The given C++ program defines a BankAccount class that simulates a simple banking system 
//where each account has a name, account number, and balance; the constructor initializes 
//these values, and member functions allow the user to view account details, deposit money, 
//or withdraw money after verifying the account number, while the main() function first collects 
//account details from the user, creates a BankAccount object, and then runs a menu-driven 
//loop that repeatedly lets the user choose between viewing account info, depositing, withdrawing, 
//or exiting, with appropriate checks for account validity and sufficient balance.

class BankAccount
{
    private:
        int account_number;
    
    protected:
        int balance;

    public:
        string name;

        BankAccount(int amt, int acc_num, string name) // Constructo to Initilize
        {
            this->name = name;
            this->balance = amt;
            this->account_number = acc_num;
        }
        
        void display_info(int acc_num)
        {
            if(acc_num == account_number)
            {
            cout<<"\n--------------- Account Details ------------------ "<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Account Balance:"<<balance<<endl;
            }
            else
            {
                cout<<"\nCannot Find Account"<<endl;
            }
        }

        void deposit(int acc_num, int amt)
        {
            if(acc_num == account_number)
            {
                balance = balance + amt;
                cout<<"Amount Deposited Successfully..."<<endl;
                cout<<"Balance: "<<balance<<endl;
            }
            else
            {
                cout<<"\nCannot Find Account"<<endl;
            }
        }

        void withdraw(int acc_num, int amt)
        {
            if(acc_num == account_number)
            {
                if(amt > balance || balance < 0)
                {
                    cout << "Insufficient money" << endl;
                    return;
                }
                else
                {
                balance = balance - amt;
                cout<<amt<<" Withdrawal successful"<<endl;
                cout<<"Remaining Balace:"<<balance<<endl;
                }
            }
            else
            {
                cout<<"\nCannot Find Account"<<endl;
            }
        }
};

int main()
{
    string NAME;
    int ACCOUNT_NUM, AMT;
    cout<<"-------------- Account Opening -----------------"<<endl;
    cout<<"Enter Name:";
    cin>>NAME;
    cout<<"ACCOUNT NUMBER:";
    cin>>ACCOUNT_NUM;
    cout<<"ENTER AMOUNT:";
    cin>>AMT;

    BankAccount user(AMT,ACCOUNT_NUM,NAME);

    bool exit = true;

    while(exit)
    {
        int choice;
        cout<<"\n1. Account Info | 2. Deposit | 3. Withdraw 4. Exit"<<endl;
        cout<<"Enter Choice:";
        cin>>choice;

        if(choice == 1)
        {
            user.display_info(ACCOUNT_NUM);
        }
        else if(choice == 2)
        {
            int dep_amt;
            cout<<"Enter Deposit Amount:";
            cin>>dep_amt;
            user.deposit(ACCOUNT_NUM,dep_amt);
        }
        else if(choice == 3)
        {
            int with_amt;
            cout<<"Enter Withdraw Amount:";
            cin>>with_amt;
            user.withdraw(ACCOUNT_NUM,with_amt);
        }
        else if(choice == 4)
        {
            exit = false;
        }
        else
        {
            cout<<"Enter Valid Number..."<<endl;
        }
    }

return 0;
}