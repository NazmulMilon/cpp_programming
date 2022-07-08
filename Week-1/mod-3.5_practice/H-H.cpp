#include<bits/stdc++.h>>
using namespace std;

int main()
{
    char str[26];
    cin>>str;

    //cout<<str<<endl;
    int n=strlen(str);

    int counter[26]={0};

    if(n>1 && n<=26){
        for(int i=0; i<n; i++){
            counter[str[i]-'a']++;
        }

        for(int i=0; i<26; i++){
            if(counter[i]>1){
                cout<<"no"<<endl;
                return 0;
            }
        }
        cout <<"yes";
        }
}
