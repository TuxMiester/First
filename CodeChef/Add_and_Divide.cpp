#include<bits/stdc++.h>
using namespace std;

string solution(int a, int b){
    int x=a;
    int g;
    bool f = 1;
    while(f = 1){
        if(a==1){
            f = 1;
            break;
        }
        g = __gcd(a,b);
        if(__gcd(a,b)==1){
            f = 0;
            break;
        }
        a = a/g;
    }
    if(x==1 || f){
        return "YES";
    }
    else{
        return "NO";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string ans = solution(a,b);
        cout<<ans<<endl;
    }
}