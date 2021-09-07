#include<bits/stdc++.h>
using namespace std;

int solution(){
    int n,x,s,a,b;
    cin>>n>>x>>s;
    int temp = x;
    vector<int> v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    for(int i=0;i<s;i++){
        cin>>a>>b;
        swap(v[a-1],v[b-1]);
    }
    for(int i=0;i<n;i++){
        if(v[i] == x){
            return i+1;
        }
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int swaps = solution();
        cout<<swaps<<endl;
    }
    return 0;
}