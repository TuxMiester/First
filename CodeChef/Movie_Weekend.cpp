#include<bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> L, vector<int> R){
    long maxLR = 0;
    long maxR = 0;
    int ans = 0;
    for (int i = 0; i < L.size(); i++) {
        if (L[i] * R[i] > maxLR) {
            maxLR = L[i] * R[i];
            maxR = R[i];
            ans = i;
        } 
        else if (L[i] * R[i] == maxLR) {
            if (R[i] > maxR) {
                maxR = R[i];
                ans = i;
            }
        }
    }
    return (ans+1);
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> l,r;
        for(int i = 0;i<n;i++){
            int ele;
            cin>>ele;
            l.push_back(ele);
        }
        for(int i = 0;i<n;i++){
            int ele;
            cin>>ele;
            r.push_back(ele);
        }
        int i = solution(n,l,r);
        cout<<i<<endl;
    }
    return 0;
}