#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,c1,c2,x;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%3==0){
            cout<<(n/3)<<' '<<(n/3);
            cout<<endl;
            
        }
        if(n%3==1){
            cout<<(n/3)+1<<' '<<(n/3);
            cout<<endl;
            
        }
        if(n%3==2){
            cout<<(n/3)<<' '<<(n/3)+1;
            cout<<endl;
            
        }
    }
    return 0;
}