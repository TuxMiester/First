#include<bits/stdc++.h>
using namespace std;

int solution(){
    int l,r,mx=INT_MIN;
    cin>>l>>r;
    int i=l;
    while(i<r){
        mx = max((r%i),(r%(i+1)));
    }
    return mx;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int ans = solution();
        cout<<ans<<endl;
    }
    return 0;
}