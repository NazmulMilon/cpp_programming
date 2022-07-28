
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

    //before sort
    cout<<"Before Sort: ";
    print_array(arr, n);
    cout<<endl;

    //Insertion sort
    for(int i=1; i<n; i++)
    {
        int key=arr[i];
        cout<<endl<<"i : "<<i<<" key: "<<endl;
        int j=i-1;
        while(arr[j]>key && j>=0){
            arr[j+1] = arr[j];
            print_array(arr, n);
            j--;
        }
        //cout<<endl;
        arr[j+1]=key;
        print_array(arr, n);
        //cout<<endl;
    }


    //After Sorting
    cout<<endl;
    cout<<"After Sort: ";
    print_array(arr, n);

    cout<<endl;

    return 0;
}
