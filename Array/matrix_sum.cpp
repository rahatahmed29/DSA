#include <bits/stdc++.h>
using namespace std;

int main()
{

    int row, col;
    cin >> row >> col;
    int a[row][col];
    int c[row][col];
    int d[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
        for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> c[i][j];
        }
        cout << endl;
    }
    

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           d[i][j]=a[i][j]+c[i][j];
           cout<<d[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}