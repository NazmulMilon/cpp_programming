
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
    cout<<"Enter the position for deletion: ";
    cin>>pos;

    //cout<<"Enter the value for deletion: ";
    //cin>>val;

    if(pos<0 || pos>size-1)
    {
        cout<<"Invalid Index Number"<<endl;
    }
    else{
        if(pos==size-1) size--;
        else{
            for(int i=pos+1; i<size; i++)
            {
                arr[i-1]=arr[i];
            }
            size--;
        }

    }

    cout<<"Array after deletion"<<endl;
    print_array(arr, size);

    return 0;
}
