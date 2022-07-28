
#include<bits/stdc++.h>
using namespace std;


void print_array(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
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

    //bubble sort implementation

    /*
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"After Sort: ";
    print_array(arr, n);
    */

    for(int i=1; i<n; i++)
    {
        int flag=0;
        cout<<"Iteration no: "<<i<<endl;
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
            print_array(arr, n);
            cout<<endl;
        }
        cout<<endl;
        if(flag==0) break;
    }

    cout<<"After Sort: ";
    print_array(arr, n);


    return 0;
}
