#include <bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> &A) {
    int net=0;
    for(int i=0;i<A.size();i++){
        net+=A[i];
        if(net/10>0){
            net=net*10;
        }
    }
    vector<int> v;
    net=net+1;
    for(int i=0;i<A.size();i++){
        int x = net%10;
        v.push_back(x);
        net=net/10;
    }
    // reverse(v.begin(),v.end());
    return v;
}

int main(){
    int n;
    cin>>n;
    vector<int>A;
    vector<int>B;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        A.push_back(ele);
    }
    B = plusOne(A);
    for(int i=0;i<B.size();i++){
        cout<<B[i]<<" ";
    }
    return 0;
}