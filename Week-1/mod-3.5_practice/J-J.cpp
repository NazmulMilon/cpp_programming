#include<bits/stdc++.h>
using namespace std;

int main()
{
    char o[51],e[51];
    cin>>o>>e;

    int n=strlen(o)+strlen(e);

    char final[n+1];

    int i=0, j=0, k=0;

    for(int j=0, k=0; i<n; i++){
        if(i%2==0){
            final[i]=o[j];
            j++;
        }
        else{
            final[i]=e[k];
            k++;
        }
    }
    final[i]='\0';
    cout<<final<<endl;
    //cout<<n;

}
