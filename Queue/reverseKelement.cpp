#include <bits/stdc++.h>
using namespace std;
void reverseK(queue<int> &q,int k){
    stack<int>st;
    for(int i=0;i<k;i++){
    st.push(q.front());
    q.pop();
    }
    
 for(int i=0;i<k;i++){
    q.push(st.top());
    st.pop();
    }
    for(int i=0;i<q.size()-k;i++){
        q.push(q.front());
        q.pop();
    }
}


int main() {

queue<int>q;
int n;
cin>>n;
for(int i=0;i<n;i++){
   int x;
   cin>>x;
   q.push(x);

}
int k;
cin>>k;
reverseK(q,k);
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();

}
    return 0;
}