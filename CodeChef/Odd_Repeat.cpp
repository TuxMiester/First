#include<bits/stdc++.h>
using namespace std;

int solution(int n, int k, int sum){
    for(int i=1;i<(2*n);i+=2){
        
            sum=sum-i;
        
    }
    return (sum/(k-1));
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,s;
        cin>>n>>k>>s;
        int ans = solution(n,k,s);
        cout<<ans<<endl;
    }
    return 0;
}