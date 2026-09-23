#include <iostream>
using namespace std;
int main()
{
    int glo = 0;
    //--------------------Break
    for(int i=0;i<5;i++)
    {
        if(i==3)
        {
            glo = 3;
            break; //immedetly exit from the loop or switch 
        }
    cout<<i;
    }
    //----------------------------
    cout<<endl;

    //-------continue---------------
    for(int i=0;i<5;i++)
    {
        if(i==3)
        {
            cout<<"Continue Here";
            continue; //immedetly exit from the loop or switch 
        }
    cout<<"Hello"<<endl;
    }


    //------goto------------------------
    if(glo==3)
    {
        goto there;
    }

    there:
    cout<<"GOTO called";
    
    
return 0;
}

//--------- return -----------------------

bool function()
    {
        if(4 == 3)
        {
            return true; // Return the control to the function call, cannot used inside main()
                            // We can return different data types
        }  
    }