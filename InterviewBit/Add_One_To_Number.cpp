#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &A) {
    int n=A.size();
    while(A[0]==0&&A.size()>1)
    {
        A.erase(A.begin());
    }
    n=A.size();
    while((A[n-1])==9&&n>0)
    {
        A[n-1]=0;
        n--;
    }
    if(n!=0)
    A[n-1]++;
    n=A.size();
    if(A[0]==0)
    {
        A.push_back(A[n-1]);
        for(int i=n-1;i>0;i--)
        {
            A[i]=A[i-1];
        }
        A[0]=1;
    }
    return A;
}

int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;cin>>ele;
        v.push_back(ele);
    }
    vector<int> v1 = plusOne(v);
    for(int i=0;i<n;i++){
        cout<<v1[i];
    }
    return 0;
}