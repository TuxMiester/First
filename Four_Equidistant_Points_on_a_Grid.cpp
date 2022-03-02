#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

    int d;
    cin>>d;
    if(d%2!=0){
        cout<<"-1";
        return 0;
    }
    if(d==1){
        cout<<"-1";
        return 0;
    }
    int a[8];
    a[0]=0;
    a[1]=1;

    a[2]=a[0]+(d/2);
    a[3]=a[1]+(d/2);

    a[4]=a[2]+(d/2);
    a[5]=a[3]-(d/2);

    a[6]=a[4]-(d/2);
    a[7]=a[5]-(d/2);

    for(int i=0;i<8;i+=2){
        cout<<a[i]<<' '<<a[i+1]<<endl;
    }
    return 0;
}