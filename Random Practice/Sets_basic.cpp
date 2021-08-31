#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(69);
    s.insert(2);
    s.insert(4);
    s.insert(2);
    for(auto i:s){
        cout<<i<<' ';
    }
    cout<<endl;
    for(auto i=s.rbegin();i!=s.rend();i++){
        cout<< *i<<' ';
    }
    return 0;
}