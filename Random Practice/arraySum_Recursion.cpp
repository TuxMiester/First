#include<bits/stdc++.h>
using namespace std;

int arraySum(int a[], int n){
    if(n==0){
        return 0;
    }
    return (arraySum(a,n-1) + a[n-1]);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for ( int i = 0; i < n; i++ )
    {
        cin>>a[n];
    }
    int ans = arraySum(a,n);
    cout<<ans<<endl;
}