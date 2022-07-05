#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,x,y;
    cin>>n>>k>>x>>y;

    int res=0;

    if(n>k)
    {
        for(int i=1; i<=k; i++){
            res=res+x;
        }
        for(int i=k+1; i<=n; i++){
            res = res+y;
        }
        cout << res;
    }

    if(n<k){
        for(int i=1; i<=n; i++){
            res=res+x;
        }
        cout << res;
    }

    //cout << res<<endl;


}
