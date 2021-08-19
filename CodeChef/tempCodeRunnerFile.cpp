#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n,m,q;
    // cin>>t;
    // while(t--){
        cin>>n>>m>>q;
        char s;
        int k;
        vector< pair <char,int> > v;
        for (int i=0; i<q; i++){
            cin>>s;
            cin>>k;
            v.push_back( make_pair(s,k) );
        }
        for(int i=0;i<q;i++){
            cout<<v[i].first<<' '<<v[i].second<<endl;
        }
    // }
    return 0;
}