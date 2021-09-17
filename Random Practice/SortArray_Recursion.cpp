#include<bits/stdc++.h>
using namespace std;

bool isSorted(int a[],int n){
    if(n==0 || n==1){
        return true;
    }
    if(a[0]>a[1]){
        return 0;
    }
    bool smallerSorted = isSorted(a+1,n-1);
    return smallerSorted;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool ans = isSorted(a,n);
    cout<<ans<<endl;
}