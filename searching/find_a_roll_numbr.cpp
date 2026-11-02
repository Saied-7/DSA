//Find a Roll Number using binary search

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //when array are sorted then apply binary search
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int target = 50;

    int l = sizeof(arr) / sizeof(arr[0]);

    //low → First index high → Last index mid → Middle index.
    int low = 0, high = l - 1, mid = (low + high)/2;
    bool found = false;

    //searching
    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] > target)
        {
            //search the left half
            high = mid - 1;

        }
        else if(arr[mid] < target)
        {
            //search the right half
            low = mid + 1;
        }
        else
        {
            cout<<"Student found at index: "<<mid;
            found = true;
            break;
        }
    }
    if(!found)
    {
    cout << "Student not found." << endl;
    }

 return 0;
}
