// implment abstract data type (ADT) - Array
#include <cstdlib>
#include <iostream>

using namespace std;

// Structure is a collection of variables of different data types under a single name
struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct myarray *a, int tSize, int uSize)
{
    (*a).total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int)); // it will store in heap
}
void setMarks(struct myarray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        cout << "Enter mark:";
        cin >> (a->ptr)[i];
    }
};
void showMarks(struct myarray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        cout << (a->ptr)[i];
    }
};

int main()
{
    struct myarray marks;
    createArray(&marks, 10, 2);
    setMarks(&marks);
    showMarks(&marks);
    return 0;
}