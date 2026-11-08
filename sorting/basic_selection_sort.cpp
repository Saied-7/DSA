//Basic Selection Sort
#include<bits/stdc++.h>
using namespace std;

//sorting
void selectionsort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        //unsorted part starting index
        int SmaIndx = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[SmaIndx])
            {
                SmaIndx = j;
            }
        }
        swap(arr[i],arr[SmaIndx]);
    }
}
//print sorted array
void print(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {29,10,14,37,13};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionsort(arr,n);
    print(arr,n);

 return 0;
}
