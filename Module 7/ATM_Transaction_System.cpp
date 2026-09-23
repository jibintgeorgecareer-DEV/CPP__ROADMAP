#include<iostream>
#include<string>
using namespace std;
// Explanation at end of code

class Account
{
    private:
        int balance = 10000;
    
    public:
        Account()
        {
            cout<<"------------ ATM Machine --------------"<<endl;
        }

        void withdraw_amount(int amt)
        {
            try
            {
                if(amt > balance)
                {
                    throw "Insufficient Balance!";
                }
                else if(amt < 0)
                {
                    throw "Invalid Amount!";
                }
                else
                {
                    balance -= amt;
                    cout<<"\nAmount withdrawn successfully!..."<<endl;
                    cout<<"Balance: "<<balance<<endl;
                }
            }
            catch(char *error)
            {
                cout<<"ERROR: "<<error<<endl;
            }
        }

        void deposit_amount(int amt)
        {
            balance = balance + amt;

            cout<<"Amount Deposited Successfully...!"<<endl;
            cout<<"Balance: "<<balance<<endl;
        }

        void balance_amount()
        {
            cout<<"Balance: "<<balance<<endl;
        }
        
};

int main()
{
    Account user;
    int choice;

    enum CHOICES
    {
        ZERO,      // enum starts with index 0 
        WITHDRAW,
        DEPOSIT,
        BALANCE
    };

    cout<<"\n1. Withdraw | 2. Deposit | 3. Balance"<<endl;
    cout<<"Enter Choice:";
    cin>>choice;

    if(choice == WITHDRAW)
    {
        int w_amt;
        cout<<"Enter Amount:";
        cin>>w_amt;

        user.withdraw_amount(w_amt);
    }
    else if(choice == DEPOSIT)
    {
        int d_amt;
        cout<<"Enter Amount:";
        cin>>d_amt;

        user.deposit_amount(d_amt);
    }
    else if(choice == BALANCE)
    {
        user.balance_amount();
    }
    else
    {
        cout<<"Invalid Choice!"<<endl;
    }

return 0;
}

// This is a simple ATM system, using the topics namespaces, exception handling
// user can withdraw, deposit, show balance
// We use exception handling in withdraw_amount()