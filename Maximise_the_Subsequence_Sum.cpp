#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int ele,sum=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>ele;
            v.push_back(ele);
        }
        int count=k;
        sort(v.begin(),v.end());
        for(int i=0;i<k;i++){
            v[i]=abs(v[i]);
        }
        for(int i=0;i<n;i++){
            if(v[i]>0){
                sum=sum+v[i];
            }
        }
        if(sum<0){
            cout<<"0"<<endl;
            break;
        }
        cout<<sum<<endl;
    }
    return 0;
}