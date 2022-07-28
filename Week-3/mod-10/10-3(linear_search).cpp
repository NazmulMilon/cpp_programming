#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    char c;
    cout<<"Do you want to search? (Y/N): ";
    cin>>c;

    while(toupper(c)=='Y')
    {
        int val;
        cout<<"Enter the value for search: ";
        cin>>val;

        int flag=0;
        for(int i=0; i<size; i++)
        {
            if(arr[i]==val)
            {
                cout<<"Index: "<<i<<" Position: "<<i+1<<endl;
                //break;    //unique case;
                flag=1;
            }
        }
        if(flag==0) cout<<"Value Not found."<<endl;

        cout<<"Do you want to continue searching? (Y/N): ";
        cin>>c;

    }

    return 0;
}
