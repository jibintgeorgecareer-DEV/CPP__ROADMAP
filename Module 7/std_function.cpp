#include<iostream>
#include<functional>  // To include functional utility

// std::function lets us to store a function inside a varible
// std::function can store different callables such as
// Normal functions, Lambda functions, Function Objects, Member functions

int add(int a, int b)
{
    return a + b;
}

int main()
{
    std::function<int(int, int)> operation; // Created a variabel 'operation'
                                            // The parameters type are listed inside brackets
                                            // Return type is set before parameter list

    operation = add;  // Stores another function into our operation vsriable.

    std::cout<<operation(89,90);

    // std::function<void()> void_function_var;   <--- Another example

return 0;
}

// Lamba example,

auto lamda_add = [](int a, int b)
{
    return a * b;
};

std::function<int(int a, int b)> lamba_var = [](int a, int b)
                                                {
                                                    return a * b;
                                                };