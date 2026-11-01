//Find a Product Price using Linear search

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int prices[] = {250, 500, 150, 800, 350, 600};
    int target = 800;

    int l = sizeof(prices) / sizeof(prices[0]);
    int index = -1;
    
    //find the target
    for(int i=0; i < l;i++)
    {
        if(prices[i] == target)
        {
            index = i;
            break;
        }
    }

    //if found print index
    if(index != -1)
    {
        cout<<"Product found at index: "<<index<<endl<<"Price: "<<target<<endl;
    }
    else
    { 
        cout<<"Product not found."<<endl;
    }

 return 0;
}
