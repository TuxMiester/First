#include<bits/stdc++.h>
using namespace std;

bool hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int n = depart.size();
    int count = 0, tr;
    bool ans = 1;
    tr = depart[0];
    for(int i=1;i<=n;i++){
        if(tr>arrive[i]){
            count++;
        }
        else if(tr<=arrive[i]){
            tr = depart[i];
        }
    }
    if(count>K){
        ans = 0;
    }

    return ans;
}

int main(){
    vector<int> arrive,depart;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arrive.push_back(ele);
    }
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        depart.push_back(ele);
    }
    bool ans = hotel(arrive,depart,k);
    if(ans){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    return 0;
}
