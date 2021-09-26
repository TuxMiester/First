#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long r,x;
        cin>>r>>x;
        if(r%3!=0){
            cout<<((x/3)-(r/3))<<endl;
        }
        else{
            cout<<((x/3)-(r/3)+1)<<endl;
        }
    }
    return 0;
}