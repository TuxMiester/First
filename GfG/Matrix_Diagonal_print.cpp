#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        vector <int> ans;
        int x = mat.size();
        if(x==0){
            return ans;  
        }
        int sum = (2*x) - 2;
        int count = 0;
        for(int k=0;k<=sum;k++){
            vector <int> ans2;
            for(int i=0;i<=sum;i++){
                int j = k-i;
                if(i<x && j<x && i>=0 && j>=0){
                    ans2.push_back(mat[i][j]);
                }
            }
            if(count%2==0){
                reverse(ans2.begin(),ans2.end());
            }
            for(auto i: ans2){
                ans.push_back(i);
            }
            count++;
        } 
        return ans;
    }
};

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        return 0;       
    }
}