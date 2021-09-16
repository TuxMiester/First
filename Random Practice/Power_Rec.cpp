#include<bits/stdc++.h>
using namespace std;

int power(int x, int n){
    if(n==1){
        return x;
    }
    int ans = power(x,n-1);
    return x*ans;
}

int main(){
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<endl;
}