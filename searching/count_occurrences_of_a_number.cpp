//Count Occurrences of a Number using linear search

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {7, 10, 7, 11, 7, 9, 10, 7};
    int target = 7, count = 0;
 
    int l = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i < l; i++)
    {
        if(arr[i] == target)
        {
            count++;
        }
    }
    if(count > 0)
    {
        cout<<target<<" appears "<<count<<" times."<<endl;
    }
    else
    {
        cout<<"Number not found."<<endl;
    }

 return 0;
}
