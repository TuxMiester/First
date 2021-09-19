#include<bits/stdc++.h>
using namespace std;

vector<int> solution(int n){
    vector<int> v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    return v;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans;
        ans = solution(n);
        for(int i = 0;i < n; i++){
            cout<<ans[i]<<' ';
        }
    }
}