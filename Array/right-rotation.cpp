#include <bits/stdc++.h>
using namespace std;
void reverse(int i,int j, int arr[]){

while (i<j)     
{
    swap(arr[i],arr[j]);
i++;
j--;

}

}
int main() {
int n, i, j,k;
    cin >> n>>k;
    int arr[n];
    for ( i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    reverse(k+1,n-1,arr);
    reverse(0,k,arr);
    reverse(0,n-1,arr);
for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }


    return 0;
}