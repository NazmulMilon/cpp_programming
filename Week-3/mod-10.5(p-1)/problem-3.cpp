
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }

    /*
    int brr[n];
    for(int i=0,j=n-1; j>=0; i++, j--)
    {
        brr[i]=arr[j];
        cout<<brr[i]<<" ";
    }
    */

    int i,j=0;
    for(int i=0, j=n-1; i<=j; i++, j--)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;


    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<< " ";
    }
    //cout<<arr[j]<<" ";
}
