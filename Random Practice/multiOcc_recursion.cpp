#include<bits/stdc++.h>
using namespace std;

int multiOcc(int a[], int pos, int n, int k){
    int ans;
    if(a[pos] == k){
        ans = pos;
        return ans;
    }else if(pos == n){
        return -1;
    }
    return multiOcc(a,pos+1,n,k);
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
    int ans = multiOcc(a,0,n,k);
    cout<<ans<<endl;
}