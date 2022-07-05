#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, res;

    //cout<< a<<b;
    char op;
    cin >> a >> op >> b;
    if(op=='+'){
        res = a+b;
        cout<<res<<endl;
    }
    if(op=='-'){
        res = a-b;
        cout << res<<endl;
    }
}
