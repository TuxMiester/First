#include<bits/stdc++.h>
using namespace std;

string solution(){
    int n, count_o = 0; int count_z = 0;
    cin>>n;
    string s,p;
    cin>>s>>p;
    for(int i=0;i<n;i++){
        if(p[i]=='0'){
            count_z++;
        }
        else if(p[i]=='1'){
            count_o++;
        }
    }
    if(count_z>0 && count_o>0){
        return "YES";
    }
    return "NO";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string ans;
        ans = solution();
        cout<<ans<<endl;

    }
}