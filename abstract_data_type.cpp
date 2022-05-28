// implment abstract data type (ADT) - Array
#include <cstdlib>
#include <iostream>

using namespace std;

// Structure is a collection of variables of different data types under a single name
struct customArray
{
    int total_size;
    int used_size;
    int *ptr;
};
void createCustomArray(struct customArray *a, int tSize, int uSize)
{
    (*a).total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int)); // it will store in heap
}
void update(struct customArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        cout << "Enter mark:";
        cin >> (a->ptr)[i];
    }
};
void display(struct customArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        cout << (a->ptr)[i];
    }
};

int main()
{
    struct customArray marks;
    createCustomArray(&marks, 10, 2);
    update(&marks);
    display(&marks);
    return 0;
}