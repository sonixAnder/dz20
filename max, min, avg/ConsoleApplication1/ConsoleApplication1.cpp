#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_func(int* arr, int size) 
{
    return  *max_element(arr, arr + size);
}

int min_func(int* arr, int size) 
{
    return  *min_element(arr, arr + size);
}

int avg_func(int* arr, int size) 
{
    double sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum / size;
}

int Action(int* A, int sizeA, int* B, int sizeB, int(*func)(int*, int)) 
{
    int result = func(A, sizeA);
    if (result > func(B, sizeB)) 
    {
        return result;
    }
    else 
    {
        return func(B, sizeB);
    }
}

int main() 
{
    setlocale(LC_ALL, "ru");
    int A[] = { 1, 2, 3, 4, 5 };
    int B[] = { 6, 7, 8, 9, 10 };
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    int(*max_ptr)(int*, int) = &max_func;
    int(*min_ptr)(int*, int) = &min_func;
    int(*avg_ptr)(int*, int) = &avg_func;

    int choice;
    cout << "Выбор: макс. значение(1), мин. значение(2), или среднее(3): ";
    cin >> choice;

    if (choice == 1) 
    {
        cout << Action(A, sizeA, B, sizeB, max_ptr) << endl;
    }
    else if (choice == 2) 
    {
        cout << Action(A, sizeA, B, sizeB, min_ptr) << endl;
    }
    else if (choice == 3) 
    {
        cout << Action(A, sizeA, B, sizeB, avg_ptr) << endl;
    }
    else 
    {
        cout << "Нету такого варианта" << endl;
    }

    return 0;
}
