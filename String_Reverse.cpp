#include <bits/stdc++.h>
using namespace std;
#define int long long
int solution(string s){
    string st;
    st = s;
    int n = s.length();
    reverse(st.begin(),st.end());
    int count = 0;
    for(int i=n-1;i>=0;i--){
        if(st[i]==s[i]){
            count++;
        }
        else{
            break;
        }
    }
    // count = count/2;
    return (n-count-1);
}

signed main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans = solution(s);
        cout<<ans<<endl;
    }
    return 0;
}