#include<iostream>
using namespace std;

template<typename T>

void linearSearch(T arr[], int n, T target)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            cout << "Element found at index: " << i << endl;
            return;
        }
    }
    cout << "Element not found in the array." << endl;
}

int main()
{
    int arr[5] = {};
    int target;

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to search: ";
    cin >> target;

    linearSearch(arr, 5, target);

    return 0;
}
