#include<bits/stdc++.h>
using namespace std;

bool findNum(int a[], int n, int k){
    if(n==0){
        return false;
    }
    if(a[0]==k){
        return true;
    }
    return findNum(a+1,n-1,k);
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
    bool ans = findNum(a,n,k);
    cout<<ans<<endl;
    return 0;
}