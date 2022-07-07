#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[1000000];
    cin>>str;

    int n = strlen(str);
    int counter[26]={0};


/*
    for(int i=0; i<n; i++)
    {
        counter[str[i]-'a']++;
    }

    for(int i=0; i<26; i++)
    {
        if(counter[i]==0){
            char val = i+'a';
            cout<<val;
            //break;
            return 0;
        }
    }
    */
     for(int i=0; i<n; i++)
    {
        counter[str[i]]++;
    }

    for(char i='a'; i<='z'; i++)
    {
        if(counter[i]==0){
            //char val = i+'a';
            cout<<i<<endl;
            //break;
            return 0;
        }
    }

    cout<<"None"<<endl;


}
