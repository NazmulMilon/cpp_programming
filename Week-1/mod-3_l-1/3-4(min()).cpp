#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a=20, b=15, c=11, d=9;
    int mn;
    //mn = min(a,b);
    //mn = min(a, min(b,c));
    mn = min(a, min(b, min(c,d)));
    cout<<mn<<endl;

    int ar[5]={5,2,3,1,0}, n=5;

    int mn2=ar[0];
    for(int i=0; i<n; i++)
    {
        //if(ar[i]<mn2){
            //mn2 = ar[i];
        //}//
        mn2 = min(mn2, ar[i]);
    }
    cout<<mn2<<endl;
}
