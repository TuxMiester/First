#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t; 
    while(t--){
        vector <string> s;
        cin>>n;
        string ans= "";
        for(int i=0;i<n;i++){
            string c;
            cin>>c;
            s.push_back(c);
        }
        int a[n]={0};
        for(int i=0;i<n;i++){
            if(s[i][i]=='1'){
                ans=ans+'0';
            }
            else{
                ans=ans+'1';
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}