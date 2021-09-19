#include<bits/stdc++.h>
using namespace std;

vector<int> solution(int n){
    vector<int> v;
    vector<int> imp;
    imp.push_back(-1);
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==2 && (abs(a[0]-a[1])%2)==0){
        return imp;
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            count++;
        }
    }
    if(count == n){
        return imp;
    }
    count = 0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            count++;
        }
    }
    if(count == n){
        return imp;
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            v.push_back(a[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            v.push_back(a[i]);
        }
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
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;
    }
}