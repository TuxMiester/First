#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0){
        return 1;
    }
    int prev = fib(n-1);
    return n*(prev);
}

int main(){
    int n;
    cin>>n;
    int ans = fib(n);
    cout<<ans<<endl;
}