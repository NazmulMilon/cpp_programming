#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int res1, res2;

    res1 = a*b;
    res2 = c*d;

    if(res1>res2){
        cout<<res1;
    }
    else if(res1<res2){
        cout<<res2;
    }
    else{
        cout<< res2;
    }
}
