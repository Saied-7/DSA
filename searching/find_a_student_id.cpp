//Find a Student's ID using Linear search.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {101,105,108,112,115,120};
    int target = 112,b;
    bool found = false;
    int l = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i < l; i++)
    {
        if(arr[i] == target)
        {
            b = i;
            found = true;
        }
    }
     if(found)
        {
            cout<<"studnt found at index :"<<b<<endl;
        }
        else
        {
            cout<<"student not found"<<endl;
        }
 return 0;
}
