#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int s = x+y;
        if((s/k)%2!=0){
            cout<<"Paja"<<endl;
        }
        else{
            cout<<"Chef"<<endl;
        }
    }
}