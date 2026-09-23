#include<iostream>
using namespace std;

void swap_elements(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_array(int *array)
{
    int *ptr_front = array;
    int *ptr_end = array + 5 - 1 ;
    
    for(int i=0;i<5;i++)
    {
        int temp = *ptr_front;
        *ptr_front = *ptr_end;
        *ptr_end = temp;

        ptr_front++;
        ptr_end--;
    }
}

void even_or_odd(int *array)
{
    int even = 0;
    int odd = 0;
    int *ptr = array;

    for(int i=0;i<5;i++)
    {
        if(*ptr % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        ptr++;
    }
    cout<<"EVEN:"<<even<<endl;
    cout<<"ODD:"<<odd;
}


int main()
{
    int V1 = 66;
    int V2 = 77;
    int arr[5] = {7,8,9,5,4};

    swap_elements(&V1,&V2);
    reverse_array(arr);
    even_or_odd(arr);
}