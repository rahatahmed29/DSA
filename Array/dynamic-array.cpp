#include <bits/stdc++.h>
using namespace std;

int main()
{

    int oldSize = 5;
    int *oldArray = new int[oldSize];
    for (int i = 0; i < oldSize; i++)
    {
        oldArray[i] = i;
    }
    int newSize = 10;
    int *newArray = new int[newSize] ;
    for (int i = 0; i < oldSize; i++)
    {
        newArray[i] = oldArray[i];
    }
       for (int i = oldSize; i < newSize; i++)
    {
        newArray[i] = i;
    }

    for (int i = 0; i < newSize; i++)
    {
        cout << newArray[i] << " "<<endl;
    }
    delete[] oldArray;
    for (int i = 0; i < oldSize; i++)
    {
        cout << oldArray[i] << " ";
    }
    

    return 0;
}