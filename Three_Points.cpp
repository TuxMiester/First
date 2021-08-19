#include <bits/stdc++.h>
using namespace std;

int main() {
    int Xa,Xb,Xc,Ya,Yb,Yc;
    int t;
    cin>>t;
    while(t--){
        cin>>Xa>>Ya;
        cin>>Xb>>Yb;
        cin>>Xc>>Yc;
        if(Xa==Xb || Ya==Yb){
            if(Xb==Xc || Yb==Yc){
                cout<<"YES";
            }
            else
        {
            cout<<"NO";
        }
        }
        else if(Xa!=Xb && Ya!=Yb){
            if(Xb==Xc || Yb==Yc){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        
        cout<<endl;
    }
	return 0;
}
