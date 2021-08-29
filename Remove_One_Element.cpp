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

    int d,d1;
    map<int,int> k;
    for(int j=0;j<n-1;j++){
        int h,l;
        h=b[j]-a[j];
        l=b[j]-a[j+1];
        if(h>0){
            k[h]++;
        }
        if(l>0){
            k[l]++;
        }
    }
    int toot,fr=0;
    for(auto j: k){
        if(j.second>fr){
            fr=j.second;
            toot=j.first;
        }
    }
    cout<<toot<<endl;
    // if(n>=3){
    //     d=(a[0]-b[0]);
    //     d1=(a[1]-b[1]);
    //     d2=(a[2]-b[1]);
    //     d3=(a[1]-b[0]);
    //     if(d==d1){
    //         cout<<abs(d)<<endl;
    //         return;
    //     }
    //     else if(d==d2){
    //         cout<<abs(d)<<endl;
    //         return;
    //     }
    //     else if(d3==d2){
    //         cout<<abs(d2)<<endl;
    //         return;
    //     }
    // }
    // else if(n<3){
    //     int mn = INT_MAX;
    //     int p = (a[0]-b[0]);
    //     int p1 = (a[1]-b[0]);
    //     int ans = min(abs(p1),abs(p));
    //     cout<<abs(ans)<<endl;
    //     return;
    // }
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        solve(n);
    }
    return 0;
}