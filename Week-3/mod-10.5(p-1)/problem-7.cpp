#include<bits/stdc++.h>
using namespace std;


void print_array(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }


    for(int i=0; i<n; i++)
    {
        if(arr[i]%3==0){
            arr[i]=-1;
        }

    }
    print_array(arr, n);



}

