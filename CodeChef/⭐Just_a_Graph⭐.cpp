#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,e=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n;i++){
            if((a[i]-a[0])!=(i-0)){
                e=e+1;
            }
        }
        cout<<(n-e)<<endl;
    }
    return 0;
}