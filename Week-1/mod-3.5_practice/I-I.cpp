#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[11], b[11], c[11];

    cin>>a>>b>>c;
    //cout<<a<<" "<<b<<" "<<c;
    //cout<<a[0];
    //cout<<a[strlen(a)-1]<<b[0]<<b[strlen(b-1)];

    if(a[strlen(a)-1]==b[0] && b[strlen(b)-1]==c[0])
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
