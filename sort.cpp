#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int MinIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[MinIndex])
                MinIndex = j;
        }

        swap(arr[MinIndex], arr[i]);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[5] = {64, 25, 12, 22, 11};
    int size;

    cout << "Original array: ";
    printArray(arr, 5);

    selectionSort(arr, 5);

    cout << "Sorted array: ";
    printArray(arr, 5);

    return 0;
}

void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        // bool swapped = false ;   to optimise
        for (int j = 0; j < (size - i); j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
            // swapped = true ;   to optimise
        }
        // if(swapped==false)  to optimise
        // break ;   to optimise
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {10, 1, 7, 6, 14, 9};
    int size;
    cout << "original array" << endl;
    printArray(arr, 6);
    cout << " " << endl;
    bubbleSort(arr, 6);

    cout << " sorted array " << endl;
    printArray(arr, 6);

    return 0;
}

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};
    int size;
    cout << "original array" << endl;
    printArray(arr, 7);
    cout << " " << endl;
    insertionSort(arr, 7);

    cout << " sorted array " << endl;
    printArray(arr, 7);

    return 0;
}