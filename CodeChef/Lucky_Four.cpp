#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        while(n!=0){
            int u = n%10;
            if(u==4){
                count++;
            }
            n = n/10;
        }
        cout<<count<<endl;
    }
}