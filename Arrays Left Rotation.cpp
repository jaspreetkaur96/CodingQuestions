#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n],p[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
        p[i] = arr[i];
    }
    int j = n-d;
    for(int i = 0; i<n; i++)
    {
        if((j+i)<n)
        {
            arr[j+i] = p[i]; 
        }
        else
            arr[i-d] = p[i];
    }
        
    
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
