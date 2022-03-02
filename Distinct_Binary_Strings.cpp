#include <bits/stdc++.h>
using namespace std;

int solution(int n, string s){
    int count = 0;
    for(int i=1;i<=n;i++){
        if(s[i]!=s[i-1]){
            count++;
        }
    }
    return count;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int ans = solution(n,s);
        cout<<ans<<endl;
    }
    return 0;
}