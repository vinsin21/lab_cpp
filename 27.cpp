#include <iostream>
using namespace std;

int main()
{
    int n, target;

    // Taking input for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Taking input for the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Taking input for the target element to search
    cout << "Enter the element to search: ";
    cin >> target;

    // Linear search
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
