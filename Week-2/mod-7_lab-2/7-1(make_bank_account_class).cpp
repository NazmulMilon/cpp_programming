#include<bits/stdc++.h>
using namespace std;

class BankAccount
{
public:
    string account_holder;
    string address;
    int age;
    int account_number;
protected:
    int balance;
private:
    string password;
public:
    BankAccount(string account_holder, string address, int age, string password)
    {
        this->account_holder=account_holder;
        this->address=address;
        this->age=age;
        this->password=password;
        this->account_number=rand()%1000000000;
        cout<<"Your Account no is: "<<this->account_number<<endl;
    }
};

int main()
{
    return 0;
}
