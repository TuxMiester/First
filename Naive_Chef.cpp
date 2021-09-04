#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n,a,b;
    cin>>n>>a>>b;
    float ans;
    int arr[n];
    int count_a = 0, count_b = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            count_a = count_a + 1;
        }
        else if(arr[i]==b){
            count_b = count_b + 1;
        }
    }
    ans = ((count_a/n)*(count_b/n));
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}