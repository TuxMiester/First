#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        int a[26]={0};
        int sum=0;
        cin>>s;
        bool b=false;
        for(int i=0;i<s.size();i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            sum=sum+a[i];
        }
        for(int i=0;i<26;i++){
            if(a[i]==sum-a[i]){
                cout<<"YES"<<endl;
                b=true;
                break;
            }
 
        }
        if(!b)
        {
            cout<<"NO\n";
        }
    }
    return 0;
}