#include<bits/stdc++.h>
using namespace std;

int rotate(vector<vector<int> > a, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            swap(a[i][j],a[n-j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
    }
}

void transpose(vector<vector<int> > arr, int x){
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    rotate(arr,x);
}
int main(){
    int n;
    cin>>n;
    int ele;
    vector<vector<int> > a(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ele;
            a[i].push_back(ele);
        }
    }
    transpose(a,n);
    return 0;
}