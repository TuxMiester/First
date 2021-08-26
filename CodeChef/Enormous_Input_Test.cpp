#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,ele,count=0;
    vector<int> v;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>ele;
        v.push_back(ele);
    }
    for(int i=0;i<n;i++){
        if(v[i]%k==0){
            count=count+1;
        }
    }
    cout<<count;
    return 0;
}