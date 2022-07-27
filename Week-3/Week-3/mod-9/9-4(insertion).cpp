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

    int pos, val;
    cout<<"Enter the position where insert: ";
    cin>>pos;
    cout<<"Enter the value which will insert: ";
    cin>>val;

    if(pos<0 || pos>size)
    {
        cout<<"Invalid position"<<endl;
    }
    else{
        //for(int i=size-1; i>=pos; i--){
            //arr[i+1]=arr[i];
        //}//
        arr[size]=arr[pos];
        arr[pos]=val;
    }

    cout<<"After insertion updated array: "<<endl;
    print_array(arr, size+1);
    return 0;
}
