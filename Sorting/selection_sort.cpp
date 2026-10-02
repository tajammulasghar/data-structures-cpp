#include<iostream>
using namespace std;

template<typename T>

void selectionSort(T arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        T temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
        
    }
}

int main()
{
    int arr[5] = {};

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, 5);

    cout << "Sorted array: ";
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
