#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;

    int a[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }

    if(row != col){
        cout<<"Not Diagonal"<<endl;
        return 0;
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j){
                continue;
            }
            if(a[i][j]>0){
                cout<<"Not Diagonal"<<endl;
                return 0;
            }
        }
    }
    cout<<"Diagonal"<<endl;     //check diagonal upto here;
    int save;
    for(int i=0; i<row; i++){
        for(int j=0; j<col;j++){
            if(i==j){
                if(i==0 && j==0)    save=a[i][j];
                else{
                    if(save != a[i][j]){
                        cout<<"Not Scaler"<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"Scaler"<<endl;
    cout<<save<<endl;;
    if(save==1){
        cout<<"Identity matrix"<<endl;
    }
    else{
        cout<<"Not Identity matrix"<<endl;
    }

    return 0;
}
