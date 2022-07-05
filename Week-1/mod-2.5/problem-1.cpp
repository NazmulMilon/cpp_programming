#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,h,res;
    cin>>a>>b>>h;

    //cout<<a<<b<<h;
    if(h%2==0){
        res = (a+b) * h/2;
    }
    cout<<res<<endl;

}
