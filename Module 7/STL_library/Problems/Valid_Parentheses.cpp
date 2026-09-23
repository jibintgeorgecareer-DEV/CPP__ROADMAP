#include<stack>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

bool is_valid(string input) 
{
    stack<char> container;   // stack for pushing para from input

    for(int i = 0; i < input.size(); i++) 
    {
        char c = input[i];

        if(c == '{' || c == '[' || c == '(')   // push all openings into stack
        {
            container.push(c);
        }
        else
        {
            if(container.empty())   // If no opening return
            {
                cout << "false one  !" << endl;
                return false;
            }

            char TOP = container.top();        // Get the top element
            container.pop();                   // pop the TOP element (Must & Very IMP)
                                               // if pop() working to remove closings
            cout << "TOP: " << TOP << endl;    // if 1st closing say ')' is true its pop() the '('  
                                               // from stack. so goes next opening of stack
            if( (c == '}' && TOP != '{') ||    // The closings never enters the stack.
                (c == ']' && TOP != '[') ||
                (c == ')' && TOP != '(')    )
            {
                cout << "false 2  !" << endl;
                return false;
            }
        }
    }

return true;
}

int main()
{
    string test1 = "[{()}]" ;
    string test2 = "{[)";

    if(is_valid(test2))
    {
        cout << "Valid Parenthesis" << endl;
    }
    else
    {
        cout << "Not Valid!" << endl;
    }

return 0;
}