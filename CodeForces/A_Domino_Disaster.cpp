#include<bits/stdc++.h>
using namespace std;

string solution(string s, int n){
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            s[i]='D';
        }
        else if(s[i]=='D'){
            s[i]='U';
        }
    }
    return s;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans = solution(s,n);
        cout<<ans<<endl;
    }
}