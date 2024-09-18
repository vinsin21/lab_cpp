#include <iostream>
using namespace std;
int main()
{
    int n1, n2;

    // Taking input for the size of the first array
    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    int arr1[n1];

    // Taking input for the elements of the first array
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    // Taking input for the size of the second array
    cout << "Enter the number of elements in the second array: ";
    cin >> n2;
    int arr2[n2];

    // Taking input for the elements of the second array
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    // Merging the two arrays into a new array
    int mergedSize = n1 + n2;
    int mergedArray[mergedSize];

    // Copy elements from the first array
    for (int i = 0; i < n1; i++)
    {
        mergedArray[i] = arr1[i];
    }

    // Copy elements from the second array
    for (int i = 0; i < n2; i++)
    {
        mergedArray[n1 + i] = arr2[i];
    }

    // Display the merged array
    cout << "Merged array: ";
    for (int i = 0; i < mergedSize; i++)
    {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
