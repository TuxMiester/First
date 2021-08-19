#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int t,n,a;
    int ans;
    cin>>t;
    while(t--){
        cin>>n>>a;
            for(int i=1;i<=n;i++){
                if(n<(i*i)){
                    ans = a*(i-1);
                    break;
                }
                else{
                    ans = a;
                }
            }
        cout<<ans<<endl;
    }
    return 0;
}