#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        //char str[100];
        //cin>>str;
        char str[101];
        cin>>str;

        int l = strlen(str);

        if(l>10){
            l=l-2;
            //for(int i=0; i<l-1; i++){

            //}//
            cout<<str[0]<<l<<str[l+1]<<endl;
        }
        else{
            cout<<str<<endl;
        }
        //cout<<length;
        //cout<<str;
        }
}
