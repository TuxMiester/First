#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    cin>>n;
    int ele=0;
    vector<int> a;
    vector<int> b;
    for(int i=0;i<n;i++){
        cin>>ele;
        a.push_back(ele);
    }
    ele=0;
    for(int i=0;i<(n-1);i++){
        cin>>ele;
        b.push_back(ele);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int d,d1,d2,d3;
    if(n>=3){
        d=abs(a[0]-b[0]);
        d1=abs(a[1]-b[1]);
        d2=abs(a[2]-b[1]);
        d3=abs(a[1]-b[0]);
        if(d==d1){
            cout<<d<<endl;
            return;
        }
        else if(d==d2){
            cout<<d<<endl;
            return;
        }
        else if(d3==d2){
            cout<<d2<<endl;
            return;
        }
    }
    else if(n<3){
        int mn = INT_MAX;
        int p = abs(a[0]-b[0]);
        int p1 = abs(a[1]-b[0]);
        int ans = min(p1,p);
        cout<<ans<<endl;
        return;
    }
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        solve(n);
    }
    return 0;
}