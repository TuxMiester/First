#include<bits/stdc++.h>
using namespace std;

int solution(string s){

    int L = 1, ans = 0, cur = 0;
	for(int i = 0; i < s.length(); i++){
		cur++;
		if(s[i] == '#'){
			if(cur > L){
				L = cur;
				ans++;
            }
			cur = 0;
        }
    }
	return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans = solution(s);
        cout<<ans<<endl;
    }
    return 0;
}