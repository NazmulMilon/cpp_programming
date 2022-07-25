#include<bits/stdc++.h>
using namespace std;

class Example
{
public:
    int add(int x, int y)
    {
        cout<<"First one: ";
        return x+y;
    }
    double add(double x, double y)
    {
        cout<<"second one: ";
        return x+y;
    }
    void add(char a)
    {
        cout<<"Hi "<<a<<endl;
    }
};

int main()
{
    Example ex;
    cout<<ex.add(2,5)<<endl;
    cout<<ex.add(2.6, 6.9)<<endl;
    ex.add('M');
    return 0;
}
