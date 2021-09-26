#include<bits/stdc++.h>
using namespace std;

int solution(string s){
    int count_o = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if(s[i]==1){
    //         count_o++;
    //     }
    // }
    // if(count_o==s.size()){
    //     return 0;
    // }
    int count = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if(s[i-1]!=s[i]){
            count++;
        }
    }
    if(s[0]=='0'){
        return count+1;
    }
    else{
        return count;
    }
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