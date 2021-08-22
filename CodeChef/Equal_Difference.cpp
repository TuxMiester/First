#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
    cin>>n;
    int mx = 0;
    int ans = 0;
    map <int, int> mp;   
    for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            mp[temp]++;
            mx = max(mx,mp[temp]);
        }
    if(n<=2){
        ans = 0;
        }
        else{
        ans = min(n-mx, n-2);
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}