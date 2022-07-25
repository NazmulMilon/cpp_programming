#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    int x;
    void sayHi()
    {
        cout<<"Hi "<<x<<endl;
    }
};
int main()
{
    Student rahim;
    //rahim.x = 50;
    rahim.sayHi();
    rahim.x=10;
    return 0;

}
