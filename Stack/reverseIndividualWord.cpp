#include <bits/stdc++.h>
using namespace std;

int main() {
string s,s1,s2;
cin>>s;
int i=0;
    while (s[i]!=' ')
    {
        s1+=s[i];
        i++;
    }
    int j=i+1;
 while (j<s.size())
    {
        s2+=s[j];
        j++;
    }
    cout<<s<<" "<<s1<<" "<<s2;

return 0;
}