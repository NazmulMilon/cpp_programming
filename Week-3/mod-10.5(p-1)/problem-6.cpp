
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

    int m;
    cin>>m;

    int arr2[m];
    for(int i=0; i<m; i++)
    {
        cin>>arr2[i];

    }

    int flag=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i]==arr2[j]){
                cout<<arr[i]<<" ";
                flag=1;
            }
            //else{
                //cout<<"Empty Set."<<endl;
            //}//
        }
    }
    if(flag==0) cout<<"Empty Set";


    //print_array(arr, n);
    cout<<endl;

    //print_array(arr2, m);
}
