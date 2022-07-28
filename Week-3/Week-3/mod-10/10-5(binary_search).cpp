
#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int x, int lb, int ub)
{
    if(lb<=ub)
    {
        int mid=(lb+ub)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]>x) return binary_search(arr, x,lb,mid-1);
        else return binary_search(arr, x, mid+1, ub);
    }
    else{
        return -1;
    }
}

int main()
{
    int size;
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int val;
    cout<<"Enter value for search: ";
    cin>>val;
    int lb=0;
    int ub = size-1;

    int checknumber;
    checknumber = binary_search(arr, val, lb, ub);
    //checknumber = binary_search(arr,val,0,size-1);


    if(checknumber != -1)
    {
        cout<<"Index: "<<checknumber<<" Position : "<<checknumber+1<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }


}
