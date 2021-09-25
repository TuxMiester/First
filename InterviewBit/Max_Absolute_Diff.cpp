#include<bits/stdc++.h>
using namespace std;

int maxArr(vector<int> &A) {
    int t = A.size();
    vector<int> res;
    int mx = INT_MIN;
    int mn = INT_MAX;
    for (int i = 0; i < t; i++)
    {
        int cal = (A[i]+i+1);
        mx = max(mx,cal);        
    }
    for (int j = 0; j < t; j++)
    {
        int cal = (A[j]+(j+1));
        mn = min(mn,cal);        
    }
    int ans1 = mx-mn;
    mx = INT_MIN;
    mn = INT_MAX;
    for (int i = 0; i < t; i++)
    {
        int cal = (A[i]-(i+1));
        mx = max(mx,cal);        
    }
    for (int j = 0; j < t; j++)
    {
        int cal = (A[j]-(j+1));
        mn = max(mn,cal);        
    }
    int ans2 = mx-mn;
    return max(ans1,ans2);
}



int main(){
    vector<int> A;
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        A.push_back(ele);
    }
    int ans = maxArr(A);
    cout<<ans<<endl;
}