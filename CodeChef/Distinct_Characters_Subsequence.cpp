#include<bits/stdc++.h>
using namespace std;

int solution(string s){
    set<char> x;
    for(int i=0;i<s.size();i++){
        x.insert(s[i]);
    }
    return x.size();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans = solution(s);
        cout<<ans<<endl;
    }
}