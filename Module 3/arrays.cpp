#include <iostream>
using namespace std;
int main()
//Arrays 1D & 2D
{
    // 1D ARRAY
    //========================================

    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]); // Find the size of the array

    for(int i=0;i<size;i++)  // Print all elements
    {
        cout<<array[i];
    }

    // 2D ARRAY
    //========================================

    int matrix[2][2] = {{2,4},{6,8}};

    // Print the matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }


    

    //----------LARGEST ELEMENT in 1D Array
    int largest = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }

    //--------Sum of Rows 2D
    for (int i = 0; i < 2; i++)
    {
        int colSum = 0;

        for (int j = 0; j < 2; j++)
        {
            colSum += matrix[i][j];
        }

        cout << "Row " << i << " = " << colSum << endl;
    }


return 0;

}