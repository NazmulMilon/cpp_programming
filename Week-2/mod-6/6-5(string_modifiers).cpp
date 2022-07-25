#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st1="abcd";
    string st2="wxyz";
    string st="mnop";
    st.assign("xyz");
    cout<<st<<endl;

    //st1+=st2;
    //cout<<st1<<endl;
    st1.append(st2);
    cout<<st1<<endl;

    string st5="jklmnopqrst";
    st1.push_back('x');
    cout<<st1<<endl;

    st5.pop_back();
    cout<<st5<<endl;

    //insert
    st2.insert(1, "lmn");
    cout<<st2<<endl;

    //delete
    st5.erase(4,3);
    cout<<st5<<endl;

    //swap
    swap(st1, st2);
    cout<<st1<< " "<<st2<<endl;

    return 0;
}
