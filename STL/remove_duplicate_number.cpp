#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the vector size:";
    cin>>n;
    vector<int> v(n);

    if (n <= 0)
    {
        cout << "Invalid vector size\n";
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()),v.end());
    for(int i : v)
    {
        cout<<i<<" ";
    }


 return 0; 
}
