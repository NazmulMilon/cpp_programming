#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count=0, final=0, m=0,n2=0;

    for(int i=2; i<=n; i++){
        while(i!=0){
            int mod=i%2;
            i/=2;
            count++;
        }
        if(count<final){
            final=final;
            m=i;
        }
        else{
            final=count;
            n2=i;
        }
    }
    if(m>n2) cout<<m<<endl;
    else    cout<<n2<<endl;

}
