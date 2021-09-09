#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        int mx = INT_MIN;
        int ind = 0;
        int count = 0;
        for(int i=0;i<N;i++){
            count = 0;
            for(int j=0;j<N;j++){
                if(arr[j][i] == 0){
                    count = count+1;
                }
            }
            if(mx<count){
                    mx = max(mx,count);
                    ind = i;
                }
        }
        return ind;
        
    }
};

int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    vector<vector<int>>arr(N,vector<int>(N));
	    for(int i = 0;i<N;i++){
	        for(int j = 0;j<N;j++){
	            int x;
	            cin >> x; 
	            arr[i][j]=x;
	        }
	    }
	    Solution ob;
	    cout << ob.columnWithMaxZeros(arr,N) << endl;
	}
	
	return 0;