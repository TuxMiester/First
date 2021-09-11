#include<bits/stdc++.h>
using namespace std;

int maxSubArray(const vector<int> &A) {
    int n = A.size();
    int mx = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + A[i];
        if(sum>mx){
            mx = sum;
        }
        if(sum<0){
            sum = 0;
        }
    }
    return mx;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for( int i = 0 ; i < n ; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int ans = maxSubArray(v);
    cout<<ans;
    return 0;
}