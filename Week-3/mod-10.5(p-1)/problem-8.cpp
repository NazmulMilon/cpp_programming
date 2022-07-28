
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


    for(int i=0; i<n; i+=2)
    {
        if(arr[i] == arr[i+1]){
            cout<<arr[i]<<" ";
        }
        else{
            cout<<arr[i]<<" ";
        }
    }

    //print_array(arr, n);



}

