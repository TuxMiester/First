#include <bits/stdc++.h>
using namespace std;

int sol(int a[], int n, string s){
    if(n==1){
        return 0;
    }
    if(n==2 && (a[0]>a[1]) && (s[0]==s[1])){
        return -1;
    }
    if((n==2) && (a[0]>a[1]) && (s[0]!=s[1])){
        return 1;
    }
    if(s[0]!=s[n-1]){
        return 1;
    }

}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        string s;
        cin>>s;
        int ans = sol(a,n,s);
        cout<<ans<<endl;
    }
    return 0;
}