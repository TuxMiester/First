#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n] = {0};
        for(int i=0;i<n;i++){
            for (int j = 0; j < n; j++)
            {
                a[i][j]=1;
            }
            
        }
        if(n%2==0){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j] = -1;
            }
        }
    }
    else if(n%2!=0){
        int i = 0, j = 0;
        while(i<n && j<n){
            a[i][j] = -1;
            i++;j++;
        }
    }
        for(int i=0;i<n;i++){
            for (int j = 0; j < n; j++)
            {
                cout<<a[i][j]<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}