#include<bits/stdc++.h>
using namespace std;

int solution(){
    long long n,s;
    cin>>n>>s;
    long long sum = (n*(n+1))/2;
    long long diff = sum - s;
    if((diff)>n || (diff)==0){
        return -1;
    }
    else{
        return (diff);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int ans = solution();
        cout<<ans<<endl;
    }
    return 0;
}