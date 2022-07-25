#include<bits/stdc++.h>
using namespace std;

int main()
{
    //stream means group
    //stringstream means group of string

    string s="ab ab   cd   cd   xy   xy";
    stringstream stream(s);
    stream<<s;

    string w;
    while(stream>>w)
    {
        cout<<w<<endl;
    }
    return 0;
}
