#include<bits/stdc++.h>
using namespace std;

string odd(string s, int sz){
    int a[26] = {0};
    for(int i=0;i<(sz/2);i++){
        a[s[i]-'a']++;
    }
    for(int i=((sz/2)+1);i<sz;i++){
        a[s[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(a[i]!=0){
            return "NO";
        }
    }
    return "YES";
}

string even(string s, int sz){
    int a[26] = {0};
    for(int i=0;i<(sz/2);i++){
        a[s[i]-'a']++;
    }
    for(int i=(sz/2);i<sz;i++){
        a[s[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(a[i]!=0){
            return "NO";
        }
    }
    return "YES";
}

string solution(){
    string s,s1,s2;
    cin>>s;
    int sz=s.size();
    if(sz%2==0){
        s1 = even(s,sz);
        return s1;
    }
    else if(sz%2!=0){
        s2 = odd(s,sz);
        return s2;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s = solution();
        cout<<s<<endl;
    }
}