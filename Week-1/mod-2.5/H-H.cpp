#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y, res;
    x=800;
    y=200;
    cin>>n;
    if(n/15>=0){
        int div = n/15;
        y=y*div;
        res = (x*n) - y;
        cout <<res;
    }
    else{
        res = x * n;
        cout << res;
    }

}
