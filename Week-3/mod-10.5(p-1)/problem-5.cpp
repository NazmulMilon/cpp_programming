
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

    cout<<"Enter the value for search: ";
    int val;
    cin>>val;

    int flag=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==val){
            cout<<"Index: "<<i<<" Position "<<i+1<<endl;
            flag=1;
            //break;
        }
    }
    if(flag==0) cout<<"Not Found."<<endl;



}
