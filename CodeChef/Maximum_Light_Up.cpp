#include<bits/stdc++.h>
using namespace std;

int solution(long long p, long long a, long long b, long long c, long long x, long long y){
    int count = 0;
    long aa=b+(x*(a));
    long bb=c+(y*a);
    if(aa>bb)
        {
            count=p/bb;
        }
        else
        {
            count=p/aa;
        }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;
        int count = solution(p,a,b,c,x,y);
        cout<<count<<endl;
    }
}