#include<bits/stdc++.h>
using namespace std;

void solution(vector<int> A, vector<int> B, int n){
    int size = n/2;
    vector<int> mkl;
    for(int i=1;i<=n;i++){
        mkl.push_back(i);
    }
    for(int i=0;i<n/4;i++){
        A.push_back(mkl[i]);
    }
    for(int i=((3*n)/4);i<n;i++){
        A.push_back(mkl[i]);
    }
    for(int i=n/4;i<((3*n)/4);i++){
        B.push_back(mkl[i]);
    }
    cout<<"YES"<<endl;
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<' ';
    }
    cout<<endl;
    for(int i=0;i<B.size();i++){
        cout<<B[i]<<' ';
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=2 || (n%4)!=0){
            cout<<"NO"<<endl;
            continue;
        }
        vector<int> A,B;
        solution(A,B,n);
    }
    return 0;
}