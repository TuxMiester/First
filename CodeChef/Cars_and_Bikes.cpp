#include<bits/stdc++.h>
using namespace std;

string solution(int n){
    if(n%4==0){
        return "NO";
    }
    else{
        return "YES";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ans = solution(n);
        cout<<ans<<endl;
    }
}