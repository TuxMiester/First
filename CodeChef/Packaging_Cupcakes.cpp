#include <iostream>

using namespace std;

int maxRemainderDivisor(int n){
    n = n>>1;
    return n+1;
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<maxRemainderDivisor(n)<<endl;
    }
    return 0;
}