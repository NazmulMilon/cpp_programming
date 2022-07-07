#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,t;
    cin>>x>>t;

    if(t<x){
        int res = x-t;
        cout<<res<<endl;
    }
    else{
        cout<<"0";
    }
}
