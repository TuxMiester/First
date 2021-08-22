#include<bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
   
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int c1=0,c2=0;
        string s,T;
        
        cin>>s;
        
        cin>>T;
        
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                c1=c1+1;
            }
        }
        for(int i=0;i<n;i++){
            if(T[i]=='1'){
                c2=c2+1;
            }
        }
    
        int mn = min(c1,c2);
        cout<<(min(n/2,mn))<<endl;
        }
    return 0;
}