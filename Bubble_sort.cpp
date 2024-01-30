// Bubble Sorting Algorithms used in swapping in cpp

#include <iostream>

using namespace std;

void base(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

void bubble_sort(int array[], int n)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+ 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main()
{
    int array[] = {10, 35, 32, 13, 26};

    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before sorting array elements are - \n";

    base(array, n);
    bubble_sort(array, n);

    cout << "\n";

    cout << "Before sorting array elements are - \n";

    base(array, n);

    return 0;
}