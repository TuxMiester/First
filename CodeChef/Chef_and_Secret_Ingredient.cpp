#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x;
    cin>>t;
    while(t--){
        vector<int> v;
        int ele,count = 0;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            cin>>ele;
            v.push_back(ele);
        }
        for(int i=0;i<n;i++){
            if(v[i]>=x){
                count=count+1;
            }
        }
        if(count>=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}