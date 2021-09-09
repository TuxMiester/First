#include <bits/stdc++.h>
using namespace std;

class Solution
{   
    public:
    vector<int> boundaryTraversal(vector<vector<int>> matrix, int n, int m) 
    {
        vector<int> v;
        int rstart=0,cstart=0;
        int rend=n-1,cend=m-1;
        if(n==1)
        {
            return matrix[0];
        }
        else if(m==1)
        {
            for(int i=0;i<n;i++)
            {
                v.push_back(matrix[i][0]);
            }
            return v;
        }
            while(cstart<m){
            v.push_back(matrix[rstart][cstart]); 
            cstart++;
 
            }
            while(rstart<n-1){
                v.push_back(matrix[rstart+1][cend]);
                rstart++;
            }
            while(cend>0){
                v.push_back(matrix[rend][cend-1]);
                cend--;
            }
            while(rend>1){
                v.push_back(matrix[rend-1][0]);
                rend--;
        }
        return v;
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}