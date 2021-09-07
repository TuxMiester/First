#include<bits/stdc++.h>
using namespace std;

string solution(){
    string s;
    cin>>s;
    int count = 0;
    int sz = s.size();
    for(int i = 0 ; i < sz ; i++){
        if(s[i]=='0'){
            count = count + 1;
        }
    }
    if(count == sz){
        return "NO";
    }
    vector<int> v;
    for(int i=0;i<sz;i++){
        if(s[i]=='1'){
            v.push_back(i);
        }
    }
    int st = v[0];
    int en = v[v.size()-1];
    for(int i = st;i<=en;i++){
        if(s[i]=='0'){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s = solution();
        cout<<s<<endl;
    }
    return 0;
}