#include<bits/stdc++.h>
using namespace std;

int hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    int i=0,j=0,count=0;
    while(i<arrive.size() && j<depart.size())
    {
        if(arrive[i]<depart[j]){
           count++;
           i++;
        }
        else{ 
            count--;
            j++;
        }
        if(count>K){
            return false;
        }
    }
    return true;
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
