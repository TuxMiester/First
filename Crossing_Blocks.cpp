#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ele;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>ele;
            v.push_back(ele);
        }
        int mx = *max_element(v.begin(),v.end());
        if(v[0]!=mx){
            cout<<"-1"<<endl;
            continue;
        }
        int count=0;
        mx=-1;
        for(int i=(n-1);i>0;i--){
            if(v[i]>mx)
            {
                mx=v[i];
                count++;
            }
        }
        cout<<count+1<<'\n';
    }
    return 0;
}