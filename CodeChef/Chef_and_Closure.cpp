#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a;
        int p1,p2,p3;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        p1=a[0]*a[n-1];
        p2=a[0]*a[1];
        p3=a[n-2]*a[n-1];
    }
}