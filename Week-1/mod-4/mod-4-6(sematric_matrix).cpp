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
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col;j++)
        {
            if(a[i][j] != a[j][i])
            {
                cout<<"Not Sematric"<<endl;
                return 0;
            }
        }
    }
    cout<<"Sematric"<<endl;
    return 0;

}
