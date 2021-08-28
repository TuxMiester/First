 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     int t;
     cin>>t;
     
     while(t--){
        int n;

        cin>>n;
        int v[n];
        for(int i=0;i<n;i++){
            v[i]=i+1;
         }
        int sum=0;
        for(int i=0;i<n;i++){
             sum=sum+v[i];
        }
        if(sum%2==0){
            cout<<n<<endl;
        }
        else{
            cout<<n-1<<endl;
        }
    }

     return 0;
 }
