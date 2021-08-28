#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> v,temp;
        int mx=INT_MIN,ele;
        for(int i=0;i<n;i++){
            cin>>ele;
            v.push_back(ele);
        }
        mx =  *max_element(v.begin(), v.end());
        long long count = 0;
        for(int i=0;i<n;i++){
            if(v[i]==mx && k<=(i+1)){
                count = count+n-i;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}