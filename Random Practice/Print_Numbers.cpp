#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if(n<=0){
        return;
    }
    print(n-1);     //Yeh line agli wali ke saath switch kar denge toh descending order mein aajayega 
    cout<<n<<' ';
}

int main(){
    int n;
    cin>>n;
    print(n);
}