#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,a;
    cin>>m>>n>>a;

    int res1 = m*n;
    int res2 = a*a;
    if(res1>res2){
        cout<<a;
    }
    else{
        if(m<n){
            cout<<m;
        }
        else{
            cout<<n;
        }
    }
}

