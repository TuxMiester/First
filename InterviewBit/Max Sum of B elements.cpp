int Solution::solve(vector<int> &A, int B) { //maximum sum of B elements
    int n = A.size();
    int sum = 0;
    for(int i=0;i<n && i<B;i++){
        sum+=A[i];
    }
    int sum1 = sum;
    for(int i=0;i<n && i<B;i++){
        sum -= A[B-1-i];
        sum += A[n-i-1];
        sum1 = max(sum1,sum);
    }
    return sum1;
}
