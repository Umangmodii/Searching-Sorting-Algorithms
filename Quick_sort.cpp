#include <iostream>

using namespace std;

void base(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

void quick_sort(int array[], int start, int end)
{

    if (start < end)
    {
        int p = partition(array, start, end); // p is Partition sort
        quick_sort(array, start, p - 1);           // left subarray in sort
        quick_sort(array, p + 1, end);             // right subarray in sort
    }
}

int partition(int array[], int start, int end)
{
    int pivot = array[end];

    for (int i = 0; i < end - 1; i++)
    {
        if (array[pivot] < array[end])
        {
            swap(array[i], array[i + 1]);
        }

        else if (array[pivot] > array[start])
        {
            array[start];
        }

        else
        {
            continue;
        }
    }
    return 0;
}

int main()
{
    int array[] = {24, 9, 29, 14, 19, 27};
    // int start, end;

    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before Elements are sorted - \n";

    base(array, n);
    quick_sort(array, 0, n - 1);

    cout << "\n";

    cout << "After Elements are sorted - \n";

    base(array, n);

    return 0;
}