// Optimized Bubble Sort

#include<bits/stdc++.h>
using namespace std;

// Sorting array
void bubblesort(int arr[], int n, int &count)
{
    for(int i = 0; i < n-1; i++)
    {
        bool swapped = false;

        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                count++;
                swapped = true;
            }
        }

        // Stop if no swapping occurs
        if(!swapped)
        {
            break;
        }
    }
}

// Printing sorted array
void printarr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0;

    bubblesort(arr, n, count);

    printarr(arr, n);

    cout << "\nTotal swaps: " << count << endl;

    return 0;
}