//Basic Bubble Sort

#include<bits/stdc++.h>
using namespace std;

//sorting array
void bubblesort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            //compare element
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

//print the sorted array
void printarr(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {64,34,25,12,22};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubblesort(arr, n);
    printarr(arr,n);
 return 0;
}
