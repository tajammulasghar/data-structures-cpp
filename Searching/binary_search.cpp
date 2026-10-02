#include<iostream>
using namespace std;

template<typename T>

void binarySearch(T arr[], int n, T target)
{
    
    int start = 0;
    int end = n - 1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target)
        {
            cout << "Element found at index: " << mid << endl;
            return;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "Element not found in the array." << endl;
}

int main()
{
    int arr[5] = {};
    int target;

    cout << "Enter 5 numbers in sorted order: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    bool sorted = true;
    for(int i = 0; i < 4; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            sorted = false;
            break;
        }
    }

    if(!sorted)
    {
        cout << "Array is not sorted. Please enter the numbers in sorted order." << endl;
        return 1;
    }

    else 
    {   
      cout << "Enter the number to search: ";
      cin >> target;
    }
   
    binarySearch(arr, 5, target);

    return 0;
}
