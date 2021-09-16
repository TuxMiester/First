#include<bits/stdc++.h>
using namespace std;

int digitCount(int n){
    if(n==0){
        return 0;
    }
    return (1+digitCount(n/10));
}

int main(){
    int n;
    cin>>n;
    int ans = digitCount(n);
    cout<<ans<<endl;
}