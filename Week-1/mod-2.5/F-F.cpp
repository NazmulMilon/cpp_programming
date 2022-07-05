#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b==c){
        cout<<"Yes";
    }
    else if(a+c==b){
        cout<<"Yes";
    }
    else if(b+c==a){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
