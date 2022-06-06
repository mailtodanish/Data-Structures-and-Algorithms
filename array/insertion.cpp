// insert element at given index in array
#include <cstdlib>
#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int indInsertion(int arr[], int size, int element, int capasity, int index)
{
    if (size >= capasity)
    {
        return -1;
    }
    for (int i = size; i >= index; i--)
    {

        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

// shift element
int indDeleion(int arr[], int size,  int index)
{

    for (int i = index; i <= size - index; i++)
    {

        arr[i] = arr[i + 1];
    }

    return 1;
}

int main()
{
    int arr[100] = {1, 2, 3, 5};
    int size = 4, element = 45, index = 3;
    display(arr, size);
    cout << "\n";
    if (indInsertion(arr, size, element, 100, index) == 1)
    {
        size++;
        display(arr, size);
    }
    indDeleion(arr, size,   0);
    size--;
    cout << "\n";
    display(arr, size);

    return 0;
}