#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n,m,q;
    cin>>t;
    while(t--){
        cin>>n>>m>>q;
        char s,temps;
        int k,count=0;
        int a[n]= {0};
        vector< pair <char,int> > v;
        for (int i=0; i<q; i++){
            cin>>s;
            cin>>k;
            v.push_back( make_pair(s,k) );
            
        }
        bool x=1;
        for(int i=0;i<q;i++){
            if(v[i].first=='-'){
                a[v[i].second-1]--;
                count--;
            }
            else if(v[i].first=='+'){
                a[v[i].second-1]++;
                count++;
            }
            if(a[v[i].second-1]<0){
                cout<<"Inconsistent";
                cout<<endl;
                x=0;
                break;
            }
            if(count>m){
                cout<<"Inconsistent";
                cout<<endl;
                x=0;
                break;
            }
        }
        if(x){
            cout<<"Consistent";
            cout<<endl;
            continue;
        }
        
    }
    return 0;
}