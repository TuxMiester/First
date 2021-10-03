#include<bits/stdc++.h>
using namespace std;

int solution(int a[], int n)
{   
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if((sum%2==0) && (a[i]%2==0) && (i%2!=0))
        {
            sum = sum + a[i];
        }
        else{
            sum = sum - a[i];
        }
    }
    if(sum%2==0){
        return 1;
    }
    else{
        return 2;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            
            cin>>a[i];
        }
        
        int ans = solution(a,n);
        cout<<ans<<endl;
    }
}