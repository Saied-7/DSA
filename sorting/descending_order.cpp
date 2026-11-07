//Descending Order

#include<bits/stdc++.h>
using namespace std;

//sorting array in descending order
void bubblesort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            //compareing element in descending order
            if(arr[j] < arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

//printing sorted array
void printarr(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}




int main()
{
    int arr[] = {6,8,7,4,2,3,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubblesort(arr,n);
    printarr(arr,n);


 return 0;
}
