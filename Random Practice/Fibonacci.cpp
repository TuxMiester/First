#include<bits/stdc++.h>
using namespace std;

int fib(int n){

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int mone = fib(n-1);
    int mtwo = fib(n-2);

    return mone + mtwo;
}

int main(){
    int n;
    cin>>n;
    fib(n);
}