#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    int temp;
    temp = arr[0];
   

    for ( j = 0; j < n - 1; j++)
    {

        arr[j] = arr[j + 1];
    }
    arr[j] = temp;

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}