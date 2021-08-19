#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--){
	    int n,m,x,num=0,rest,mx=0;;
        cin>>n>>m>>x;
        int ele;
        vector<int> a,b;
        for(int i=0;i<n;i++){
            cin>>ele;
            a.push_back(ele);
        }
        for(int i=a.size()-1;i>=0;i--){
            if(a[i]>=m){
                num+=1;
                b.push_back(i+1);
                a[i]=-1;
            }
        }
       
        int temp;
        if(num<=x){
            rest=(x-num);
                for(int j=0;j<rest;j++){ 
                     ele=0;
                    for(int i=0;i<a.size();i++){
                    ele=max(ele,a[i]);
                    if(ele==a[i]){
                        temp=i+1;
                    }
                }
                b.push_back(temp);
                a[temp-1]=-1;
            }
            
            
        }
        sort(b.begin(),b.end());
        num=b.size();
        cout<<num<<' ';
        for(int i=0;i<b.size();i++){
            cout<<b[i]<<' ';
        }
        cout<<endl;
	}
	return 0;
}