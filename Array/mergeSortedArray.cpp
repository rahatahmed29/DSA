#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k = 0;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {

        cin >> arr1[i];
    }
    cin >> m;
    int arr2[m];
    for (int i = 0; i < n; i++)
    {

        cin >> arr2[i];
    }
    int mergedArr[m + n];
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            mergedArr[k++] = arr1[i++];
        }
        else
        {
            mergedArr[k++] = arr2[j++];
        }
    }
    while (j < m)
    {
        mergedArr[k++] = arr2[j];
        j++;
    
        
    }
    while (i< n)
    {
        mergedArr[k] = arr1[i];
        k++;
        i++;
        
    }
    for (int i = 0; i < m + n; i++)
    {

        cout << mergedArr[i]<<" ";
    }

    return 0;
}