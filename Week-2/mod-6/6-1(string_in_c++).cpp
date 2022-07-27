#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    st="sg";
    //cin>>st;
    cout<<st.capacity()<<endl;
    cout<<st.max_size()<<endl;
    cout<<st<<endl;

    cout<<endl;
    string st1(10, 'z');
    cout<<st1<<endl;


    string st2="abcd";
    string st3="bp bp bp wxyz";
    string n=st2+st3;

    cout<<n<<endl;
    st2=st2+st3; //st2+=st3;
    cout<<st2<<endl;
    st2=st3;

    cout<<st2<<endl;

    cout<<"\n"<<endl;

    string st5="abcd";
    string st6="xyz";
    if(st5==st6){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
