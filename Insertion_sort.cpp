#include <iostream>

using namespace std;

void base(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

void insertion_sort(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) // All Sorted List in Array
        {
            if (array[i] > array[j]) // Compare 
            {
                array[i];
            }

            else
            {               
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main()
{
    int array[] = {12, 31, 25, 8, 32, 17};

    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before sorted array Elements are - \n";

    base(array, n);
    insertion_sort(array, n);

    cout << "\n";

    cout << "After sorted array Elements are - \n";

    base(array, n);

    return 0;
}