#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st="abcdefghij";
    cout<<st.length()<<endl;
    cout<<st<<" "<<st.size()<<endl;

    st.resize(4);
    cout<<st<<" "<<st.size()<<endl;

    st.clear();
    cout<<st<<" "<<st.size()<<endl;

    if(st.empty())
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
