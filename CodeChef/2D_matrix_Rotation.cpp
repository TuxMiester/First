#include<bits/stdc++.h>
using namespace std;

int rotate(vector<vector<int> > a, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            swap(a[i][j],a[i][n-j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
}

void transpose(vector<vector<int> > arr, int x){
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    cout<<"run1\n";
    rotate(arr,x);
}
int main(){
    int n;
    cin>>n;
    int ele;
    vector<vector<int> > a;
    vector<int> tt;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ele;
            tt.push_back(ele);
        }
        a.push_back(tt);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    transpose(a,n);
    return 0;
}