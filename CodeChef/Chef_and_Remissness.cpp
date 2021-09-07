#include<bits/stdc++.h>
using namespace std;

void solution(int a[2]){
    int A,B;
    cin>>A>>B;
    int mx = max(A,B);
    a[0] = mx;
    a[1] = A+B;
    return;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[2];
        solution(a);
        for(int i=0;i<2;i++){
            cout<<a[i]<<' ';
        }
    }
    return 0;
}