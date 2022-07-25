#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st="aaaabcdeababfghij";
    cout<<st.find('b')<<endl;
    cout<<st.rfind('b')<<endl;

    cout<<st.find_first_of('b')<<endl;
    cout<<st.find_last_of('b')<<endl;

    cout<<st.find_first_not_of('b')<<endl;
    cout<<st.find_last_not_of('j')<<endl;

    //cout<<st.substr(2,5)<<endl;
    string sub=st.substr(4,4);
    cout<<sub<<endl;

    return 0;
}

