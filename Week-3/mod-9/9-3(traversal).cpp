
#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[50];
    int size;
    cin>>size;

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    print_array(arr, size);
    return 0;
}
