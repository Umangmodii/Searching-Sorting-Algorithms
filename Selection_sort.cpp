#include <iostream>

using namespace std;

void base(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

void selection_sort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++) // One by one move boundary of unsorted subarray
    {
        for (int j = i + 1; j < n; j++)
        {
            // if(array[i] > array[j])
            // {
            //    int temp = array[i];
            //    array[i] = array[j];
            //    array[j] = temp;
            // }

            int small = i; // minimum element in unsorted array

            if (array[j] < array[small])
            {
                small = j;

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

    cout << "Before Elements sorted are array - \n";

    base(array, n);
    selection_sort(array, n);

    cout << "\n";

    cout << "\nAfter Elements sorted are array - \n";

    base(array, n);

    return 0;
}