#include<bits/stdc++.h>
using namespace std;

int minTime(vector<int> h, vector<int> a, int m, int l){
    int sum = 0;
    while(true){
        for(int i=1;i<=h.size();i++){
            int v = h[i-1] + (a[i-1]*i);
            if(v>=l){
                sum = sum + v;
            }
            if(sum>=m){
                return (i-1);
            }
        }
    }
}

int main(){
    int n,m,l,ele;
    vector<int> h,a;
    cin>>n>>m>>l;
    for(int i=0;i<n;i++){
        cin>>ele;
        h.push_back(ele);
    }
    for(int i=0;i<n;i++){
        cin>>ele;
        a.push_back(ele);
    }
    int ans = minTime(h,a,m,l);
    cout<<ans;
    return 0;
}