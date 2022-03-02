#include <bits/stdc++.h>
using namespace std;

int solution(int a, int b){
    long long c = (a*b)/__gcd(a,b);
    return c/a;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        long long ans = solution(a,b);
        cout<<ans<<endl;
    }
    return 0;
}