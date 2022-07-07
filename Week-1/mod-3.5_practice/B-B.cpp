#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[1000000];
    cin>>str;
    //cout<<str

    int n= strlen(str);
    //cout<<n<<endl;
    for(int i=0; i<n ; i++)
    {
        if(i%2 != 0){
            continue;
        }
        cout<<str[i];
    }
}
