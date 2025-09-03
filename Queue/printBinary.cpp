#include <bits/stdc++.h>
using namespace std;
void printBin(int &n){
    queue<string>q;
    q.push("1");

for(int i=0;i<n;i++){

string front=q.front();
cout<<front<<" ";
q.pop();
q.push(front+"0");
q.push(front+"1");

}

}

int main() {

int n;
cin>>n;
printBin(n);

    return 0;
}