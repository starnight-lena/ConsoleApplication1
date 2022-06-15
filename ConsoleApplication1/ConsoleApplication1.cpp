// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    const int arrsize = 100;
    int arr1[arrsize]{};
    int arr2[arrsize]{};

    srand(time(0));
    rand();
    rand();
    rand();
    rand();

    for (size_t i = 0; i < arrsize; i++)
    {
        arr1[i] = rand() / RAND_MAX * 100;
    }


    int* arr1w = arr1;
    int* arr2w = arr2;
    int* arr1e = arr1 + 100;

    while (arr1w != arr1e)
    {
        *arr2w++ = *arr1w++; // копирование в стиле указателей
    }

    for (size_t i = 0; i < arrsize; i++)
    {
        *arr2w++ = *arr1w++; 
    }
}

