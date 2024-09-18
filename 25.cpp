#include <iostream>
using namespace std;

int main()
{
    int n;

    // Taking input for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Taking input for array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Initialize two variables for largest and second largest
    int largest = arr[0], secondLargest = -1;

    // Find the largest and second largest elements
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    // Display the second largest number
    if (secondLargest == -1)
    {
        cout << "No second largest element found." << endl;
    }
    else
    {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}
