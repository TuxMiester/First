#include<bits/stdc++.h>
using namespace std;

void max_sum_sub(vector<int> a){
    int cur = 0;
    int mx = INT_MIN;
    for(int i=0;i<a.size();i++){
        cur = cur + a[i];
        if(cur>mx){
            mx=cur;
        }
        if(cur<0){
            cur=0;
        }
    }
    cout<<mx<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int ele;
        for(int i=0;i<n;i++){
            cin>>ele;
            v.push_back(ele);
        }
        max_sum_sub(v);
    }
    return 0;
}