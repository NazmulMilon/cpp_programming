#include<bits/stdc++.h>

using namespace std;
//constructor example
/*
class Example
{
public:
    int x;
    int y;
    int z;
    Example(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
};
int main()
{

    Example a(10,20,30);
    cout<<a.x<<" "<<a.y<<" "<<a.z<<endl;
    return 0;
}
*/

//constructor getter setter
class Example
{
private:
    int x;
    int pass;   //1234
public:
    Example(int p)
    {
        pass=p;
    }
    void setter(int a, int p)
    {
        if(pass==p)
        {
            x=a;
        }
        else{
            cout<<"password didn't match"<<endl;
        }
    }
    int getter(int p)
    {
        if(pass==p){
            return x;
        }
        else{
            cout<<"password didn't match"<<endl;
            return -1;
        }
    }
};
int main()
{

    Example a(1234);
    a.setter(1500, 1234);
    cout<<a.getter(1234)<<endl;

    return 0;
}
