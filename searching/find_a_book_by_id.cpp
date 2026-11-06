//Find a Book by ID using binary search
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {105, 110, 115, 120, 125, 130, 135, 140, 145};
    int target = 130;

    int l = sizeof(arr) / sizeof(arr[0]);

    //low → First index high → Last index mid → Middle index.
    int low = 0, high = l - 1, mid;
    bool found = false;

    //searching
    while(low <= high)
    {
        mid = (low + high)/2;

        //search the right half
        if(target > arr[mid])
        {
            low = mid + 1;
        }
        //search the left half
        else if(target < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            cout<<"Book found at index "<<mid <<" \nBook ID: "<<target <<endl;
            found = true;
            break;
        }
    }
    //if book not found
    if(!found)
    {
        cout<<"Book not found."<<endl;
    }

 return 0;
}
