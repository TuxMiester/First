#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> nums, int t){
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid]>t) {
                right=mid-1;
            }
            else if(nums[mid]<t){
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
        int n,target,ele;
        cin>>n>>target;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>ele;
            v.push_back(ele);
        }
        int answer = searchInsert(v,target);
        cout<<answer;
    }
    return 0;
}