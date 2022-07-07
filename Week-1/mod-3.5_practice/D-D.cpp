#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[101];
    cin>>str;
    int n = strlen(str);

    int count=0;
    for(int i=1; i<n-1; i++){
        count++;
    }
    cout<<str[0]<<count<<str[n-1]<<endl;
}
