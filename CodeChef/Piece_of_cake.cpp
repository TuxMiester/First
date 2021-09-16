#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mn=INT_MAX;
        sort(a,a+n);
        for(int i=0;i<n-k-1;i++){
            mn=min(mn,abs(a[i]-a[i+k-1]));
        }
        cout<<mn<<endl;
    }
    return 0;
}