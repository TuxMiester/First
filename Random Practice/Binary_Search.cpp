#include<bits/stdc++.h>
using namespace std;

int searchBinary(vector<int> v, int target){
    int left = 0, right = v.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (v[mid]>target) {
                right=mid-1;
            }
            else if(v[mid]<target){
                left=mid+1;
            }
            else{
                return mid;
            }
        }
        
        return left;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ele,target;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>ele;
            v.push_back(ele);
        }
        cin>>target;
        int ans = searchBinary(v,target);
        cout<<ans;
    }
    return 0;
}