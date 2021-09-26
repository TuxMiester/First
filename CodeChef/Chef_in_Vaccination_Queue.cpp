#include<bits/stdc++.h>
using namespace std;

int solution(int n, int p, int x, int y){
    int a[n], time;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int count_z = 0, count_o = 0;
    for (int i = 0; i < (p-1); i++)
    {
        if(a[i]==0){
            count_z++;
        }
        else{
            count_o++;
        }
    }
    time = (count_z*x)+(count_o*y)+y;

    return time;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p,x,y;
        cin>>n>>p>>x>>y;
        int ans = solution(n,p,x,y);
        cout<<ans<<endl;
    }
}