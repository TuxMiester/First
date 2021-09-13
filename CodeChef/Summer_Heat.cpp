#include<bits/stdc++.h>
using namespace std;

int solution(){
    int xa,xb,Xa,Xb;
    cin>>xa>>xb>>Xa>>Xb;
    int a = Xa/xa;
    int b = Xb/xb;
    return a+b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int ans = solution();
        cout<<ans<<endl;
    }
}