#include <bits/stdc++.h>
using namespace std;
#define int long long

int solution(int n){
    vector<int> a;
    for(int i=0;i<n;i++){
        int ele;cin>>ele;a.push_back(ele);
    }
    if(a.size()==1){
        return a[0];
    }
    if(a.size()==2){
        return max(a[0],a[1]);
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum+a[i];
    }
    int x=0;
    int c=0;
    sum/=sum;
    for(int i=0;i<n;i++){
        x = x+a[i];
        if(x>=sum){
            c=i;
            break;
        }
    }
    int sum1=0,sum2=0;
    for(int i=0;i<=c;i++){
        sum1=sum1+a[i];
    }
    for(int j=c+1;j<n;j++){
        sum2=sum2+a[j];
    }
    return max(sum1,sum2);
}

signed main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = solution(n);
        cout<<ans<<endl;
    }
    return 0;
}