#include<bits/stdc++.h>
using namespace std;

bool minus(vector<int> v, int x){
    for(int i=0;i<v.size();i++){
        if((x-2)==v[i]){
            return true;
            break;
        }
        else if((x-1)==v[i]){
            return true;
            break;
        }
    }
}

int main(){
    int t,s;
    cin>>t;
    while(t--){
        vector<int> v;
        cin>>s;
    }
}