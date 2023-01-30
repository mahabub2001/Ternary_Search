#include<bits/stdc++.h>
using namespace std;

int ternary_search(int a[],int n,int x)
{
    int l=0;
    int r=n-1;

    while(l<=r)
    {
        int mid1=l+(r-l)/3;
        int mid2=r-(r-l)/3;

        if(a[mid1]==x)
        {
            return mid1+1;
        }
        if(a[mid2]==x)
        {
            return mid2+1;
        }

        if(a[mid1]>x)
        {
            r=mid1-1;
        }
        else if(a[mid2]<x)
        {
            l=mid2+1;
        }
        else
        {
            l=mid1+1;
            r=mid2-1;
        }
    }
    return -1;
}

int main()
{
    int n,p;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;

    p=ternary_search(arr,n,x);
    cout<<p<<endl;
}
