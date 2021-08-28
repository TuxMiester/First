#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int a[6];
    cin>>t;
    while(t--){
        for(int i=0;i<6;i++){
            cin>>a[i];
        }
        if((a[2]==a[0] && a[3]==a[1]) || (a[3]==a[0] && a[2]==a[1]))
        cout<<"1"<<endl;
        else if((a[4]==a[0] && a[5]==a[1]) || (a[5]==a[0] && a[4]==a[1]))
        cout<<"2"<<endl;
        else
        cout<<"0"<<endl;
    }
    return 0;
}