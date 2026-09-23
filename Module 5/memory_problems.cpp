#include<iostream>
#include<memory>
#include<string>
using namespace std;

void student_Mark() // Dynamic Array 
{
    int number_of_stud;
    cout<<"Enter Number of Students:";
    cin>>number_of_stud;

    int *students = new int[number_of_stud];
    
    cout<<"Enter Marks (One By One)"<<endl;
    for(int i=0;i<number_of_stud;i++)
    {
        cin>>students[i];
    }

    int highest_mark = students[0];
    int lowest_mark = students[0];
    int avg_mark = 0;
    int sum_mark = 0;

    for(int i=0;i<number_of_stud;i++)
    {
        if(students[i] > highest_mark)
        {
            highest_mark = students[i];
        }
        if(students[i] < lowest_mark)
        {
            lowest_mark = students[i];
        }
        sum_mark += students[i];
    }
    cout<<"Highest Mark:"<<highest_mark<<endl;
    cout<<"Lowest Mark:"<<lowest_mark<<endl;
    cout<<"Average Mark:"<<sum_mark/number_of_stud<<endl;
    cout<<"Total Marks:"<<sum_mark<<endl;

delete[] students;
}

void swap_utility_reference(int &a, int &b) //Swap values using reference
{
    cout<<"Before Swapping"<<endl;
    cout<<"a:"<<a<<" "<<"b:"<<b<<endl;

    cout<<"After Swapping"<<endl;
    int temp = a;
           a = b;
           b = temp;
    cout<<"a:"<<a<<" "<<"b:"<<b<<endl;
}

void swap_utility_pointer(int *a, int *b) // swap values using pointers
{
    cout<<"Before Swapping"<<endl;
    cout<<"a:"<<*a<<" "<<"b:"<<*b<<endl;

    cout<<"After Swapping"<<endl;
    int temp = *a;
          *a = *b;
          *b = temp;
    cout<<"a:"<<*a<<" "<<"b:"<<*b<<endl;
}

void reverse_pointer_array(int array[], int SIZE)
{
    int *ptr = array;

    for(int i=0;i<SIZE/2;i++)
    {
        int temp = *(ptr + i); // Element at current index
        *(ptr + i) = *(ptr + (SIZE - i - 1));
        *(ptr + (SIZE - i - 1)) = temp;
    }

    for(int i=0;i<SIZE;i++)
    {
        cout<<*ptr;
        ptr++;
    }
}
int main()
{
    int x = 67, y = 50;
    //student_Mark(); //Dynamic Array
    //swap_utility_reference(x,y);  // Swap values using reference
    //swap_utility_pointer(&x,&y);    // Swap values using pointers

    int SIZE = 6;
    int array[SIZE] = {1,2,4,6,3,8};
    reverse_pointer_array(array,SIZE);

return 0;
}