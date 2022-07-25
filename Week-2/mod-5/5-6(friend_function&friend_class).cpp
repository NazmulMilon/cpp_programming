#include<bits/stdc++.h>
using namespace std;

/*
//friend class
class Parent
{
private:
    int taka;
public:
    Parent(int tk)
    {
        taka=tk;
    }
    friend class Abburbondhu;
};

class Abburbondhu
{
public:
    void tellsecret(Parent *ptr)
    {
        cout<<ptr->taka<<endl;
    }
};
int main()
{
    Parent pt(1500);
    Abburbondhu bondhu;
    bondhu.tellsecret(&pt);
    return 0;
}
*/
/*
class Parent
{
private:
    int taka;
protected:
    int password;
public:
    Parent(int tk, int ps)
    {
        taka=tk;
        password=ps;
    }
    //friend class Abburbondhu;  //if don't use friend class can not access private/protectd data.
};

class Abburbondhu
{
public:
    void tellsecret(Parent *ptr)
    {
        cout<<ptr->taka<<endl;
        cout<<ptr->password<<endl;
    }
};
int main()
{
    Parent pt(1500,2345);
    Abburbondhu bondhu;
    bondhu.tellsecret(&pt);
    return 0;
}
*/

//friend class

class Parent
{
private:
    int taka;
protected:
    int password;
public:
    Parent(int tk, int ps)
    {
        taka=tk;
        password=ps;
    }
    friend void tellsecret(Parent *ptr);
};

void tellsecret(Parent *ptr)
{
    cout<<ptr->taka<<" "<<ptr->password<<endl;
}
int main()
{
    Parent pt(1500,2345);
    tellsecret(&pt);
    return 0;
}
