#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1="abc";
    string s2="xyz";
    s1=s2;
    s2=s1;
    cout<<s1<<" "<<s2<<endl;

    cout<<"-----------2-------"<<endl;

    string st3="abcdef";
    string st4;
    cout<<st3.capacity()<<" "<<st4.capacity()<<endl;

    cout<<"-----------3-------"<<endl;

    string s11="Codeblocks";
    s11.resize(4);
    cout<<s11<<endl;

    cout<<"-----------4-------"<<endl;

    string s12="Codeblocks";
    s12.clear();
    cout<<s12.capacity()<<" "<<s12.size()<<endl;

    cout<<"-----------5-------"<<endl;

    string s13="nortihP";
    string:: reverse_iterator it;
    for(it=s13.rbegin();it!=s13.rend();it++)
     {
         cout<<*it;
     }

    cout<<endl;
    cout<<"-----------6-------"<<endl;

    string s14="Phitron";
    cout<<s14.at(1)<<s14.at(2)<<endl;

    cout<<"-----------7-------"<<endl;

    string s15="ProgrammingIsDifficult";
    s15.insert(13,"Not");
    cout<<s15<<endl;

    cout<<"-----------8-------"<<endl;

    string s16="Hello";
    s16.erase(2,3);
    cout<<s16<<endl;

    cout<<"-----------9-------"<<endl;

    string s17="HelloWorld";
    string s27=s17.substr(5,5);
    cout<<s27.substr(3,2)<<endl;

    cout<<"----------10-------"<<endl;

    string s18="CGPA";
    cout<<s18.find('G');
    return 0;
}

