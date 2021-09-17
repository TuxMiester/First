#include<bits/stdc++.h>
using namespace std;

int numIndex(int a[],int pos, int n, int k){
    if(a[pos] == k){
        return pos;
    }else if(pos == n){
        return -1;
    }
    return numIndex(a,pos+1,n,k);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    int ans = numIndex(a,0,n,k);
    cout<<ans<<endl;
}