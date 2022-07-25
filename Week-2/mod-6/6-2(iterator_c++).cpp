#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    string st="abcdefghij";
    string:: iterator it;
    for(it=st.begin(); it!=st.end(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
*/
/*
int main()
{
    string st="abcdefghij";
    string:: reverse_iterator it;
    for(it=st.rbegin(); it!=st.rend(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
*/
/*
int main()
{
    string st="abcdefghij";

    for(string:: reverse_iterator it=st.rbegin(); it!=st.rend(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}

*/
int main()
{
    string st="abcdefghij";

    for(auto it=st.rbegin(); it!=st.rend(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
