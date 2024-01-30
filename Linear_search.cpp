#include <iostream>

using namespace std;

int linear_search(int array[], int value, int n)
{
    for (int i = 0; i < n; i++)
    {
        if(array[i] == value )
        {
            return 1;
        }
    }

    return -1;
}

int main()
{
    int arrray[] = {70, 40, 30, 11, 57, 41, 25, 14, 50};
    int value = 11;
    int n = sizeof(arrray) / sizeof(arrray[0]);

    int result = linear_search(arrray, value, n);

    cout << "The elements of the array are - ";

    for (int i = 0; i < n; i++)
    {
        cout << arrray[i] << " ";
    }
    cout << "\n Element to search is : " << value << endl;

    if (result == -1)
    {
        cout << "\nElement is not present in the array";
    }

    else
    {
        cout << "\nElement is present in the array";
    }

    return 0;
}