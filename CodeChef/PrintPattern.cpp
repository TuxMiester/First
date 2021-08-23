#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n][n];
        int t=0,c=1;
        while(c<=n*n){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if((i+j)==t){
                        a[i][j]=c;
                        c++;
                    }
                }
            }
            t++;
        }
        for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<a[i][j]<<' ';
                }
                cout<<endl;
    }
    }
    
    return 0;
}