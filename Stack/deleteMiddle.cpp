#include <bits/stdc++.h>
using namespace std;

int main() {
vector<int>nums(10);
vector<int>result(9);

stack<int> st;
int mid=4;
for(int i=0;i<nums.size();i++){
    cin>>nums[i];
}
for(int i=0;i<nums.size();++i){
    if(nums[i]==nums[mid])
    continue;
    else{
        st.push(nums[i]);
    }
}
while(!st.empty()){
    result.push_back(st.top());
    st.pop();
}
reverse(result.begin(),result.end());
for(int num:result){
    cout<<num<<' ';
}
 
    return 0;
}