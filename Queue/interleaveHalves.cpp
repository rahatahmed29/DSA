#include <bits/stdc++.h>
using namespace std;
 void interleave(vector<int> a){
vector<int>v;
queue<int>q1;
queue<int>q2;
for(int i=0;i<a.size()/2;i++){
    q1.push(a[i]);
}
for(int i=a.size()/2;i<a.size();i++){
    q2.push(a[i]);
}
while(!q1.empty()){
v.push_back(q1.front());
q1.pop();


v.push_back(q2.front());
q2.pop();
}
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }

 }`




int main() {
vector<int>a;
for(int i=0;i<4;i++){
    int x;
    cin>>x;
    a.push_back(x);
}
interleave(a);

    return 0;
}