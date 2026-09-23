// The preprocessors run before C++ compiler & handles the instruction with #
// There are : #define | #include | #ifdef | #endif

#include<iostream> // Used to include the content of header file iostream.


#define PI 3.14  // Before compilation compiler replace word 
                // PI is not variable, compiler replaces 3.14 with PI

#define CELCIUS 34.90
#define NAME "JIBIN"

// The names defines using #define is called MACROS, Here NAME,CELCIUS,PI are macros

#define SUM(x) ((x) * (x))  
//  cout<< SUM(7);    // Performs the math


//----------------------------------------------------------------------------------------------

//  #ifdef means if defined, It checks whaether the macro created with (#defined) is defined.
//  if macro exists, the code inside the block is included during COMPILE TIME .
// If NOT it skipped.

//#ifdef literally means “if this name has been
//defined with #define, then compile the following block of code until #endif is reached.”

int main()
{
    #ifdef PI
    std::cout<<"PI is defined";
    #endif

    //------------------------------------------
    #ifndef HELLO   // If NOT defined 

    #define HELLO   // define

    #endif
    //-------------------------------------------
}

