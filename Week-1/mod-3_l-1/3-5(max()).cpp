#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a=20, b=15, c=11, d=9;
    int mx;
    //mx = min(a,b);
    //mx = min(a, min(b,c));
    mx = max(a, min(b, min(c,d)));
    cout<<mx<<endl;

    int ar[5]={5,2,3,1,0}, n=5;

    int mx2=ar[0];
    for(int i=0; i<n; i++)
    {
        //if(ar[i]<mn2){
            //mn2 = ar[i];
        //}//
        mx2 = max(mx2, ar[i]);
    }
    cout<<mx2<<endl;
}
