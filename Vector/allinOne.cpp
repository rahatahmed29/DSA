#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v1;
    vector<int> v2(5);
    vector<int> v3(5, 10);
    vector<int> v = {4,2,0,1, 2,1, 0,7, 5};
    // v.push_back(4);
    // cout<<v[0];
    // cout<<v.at(0);
    // cout<<v.front();
    // cout<<v.back();
    // cout<<v.size();
    // cout<<v.capacity();
    // v.shrink_to_fit();
    // cout<<v.capacity();
    // for(int i:v){
    //     cout<<i<<' ';
    // }
    // v.insert(v.begin()+1,90);
    // v.erase(v.begin()+1);
    // v.erase(v.begin(),v.begin()+3);
    // v.pop_back();
    // if (!v.empty())
    //     cout << "Not empty";
    // for (int x : v)
    //     cout << x << " ";
    // v.clear();
    // if (v.empty())
    //     cout << 'empty';
// sort(v.begin(),v.end());
// reverse(v.begin(),v.end());
// vector<int>::iterator it;
// for(auto it=v.begin();it!=v.end();++it){
//     cout<<*it;
// }


// for(int &x:v2) cin>>x;
// for(int x:v2) cout<<x;

//Find element
// auto it=find(v.begin(),v.end(),1);
// if(it!=v.end())
// cout<<"Find the element at index: "<<it-v.begin();

//Get unique value
// sort(v.begin(),v.end());
// for(auto it=v.begin();it!=v.end();it++){
// cout<<*it<<" ";

// }
// cout<<endl;
// auto afterUnq=unique(v.begin(),v.end());
// for(auto it=v.begin();it!=v.end();it++){
// cout<<*it<<" ";

// }
// cout<<endl;

// v.erase(afterUnq,v.end());
// for(auto it=v.begin();it!=v.end();it++){
// cout<<*it<<" ";

// }

//Get min-max

// auto it=min_element(v.begin(),v.end());
// auto it2=max_element(v.begin(),v.end());
// cout<<*it<<" "<<*it2;

//Rotate elements

// rotate(v.begin(),v.begin()+3 ,v.end());

// for(auto &x:v)cout<<x<<' ';

// cout<<endl;

// rotate(v.begin(),v.end()-3 ,v.end());

// for(auto &x:v)cout<<x<<' ';

vector<int>freq(8,0);
for(int &x:v)freq[x]++;
sort(freq.begin(),freq.end());
for(int i=0;i<freq.size();i++){
    if(freq[i]!=0)
    cout<<i<<" ";
}
    return 0;
}