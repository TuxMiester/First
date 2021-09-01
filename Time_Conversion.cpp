#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    string ans = s.substr(0,7);
    int a = (s[0]-'0');
    int b = (s[1]-'0');
    if(s[8]=='A' && (a==1) && (b==1)){
        return ans;
    }
    if(s[0]=='1' && s[1]=='2' && s[8]=='A'){
        ans[0]='0';
        ans[1]='0';
        return ans;
    }
    if(s[8]=='A'){
        return ans;
    }
    if(s[8]=='P' && s[0]=='1' && s[1]=='2'){
        return ans;
    }
    else{
        int x = (s[0]-'0');
        int y = (s[1]-'0');
        int xy = ((10*x)+y);
        xy = xy + 12;
        x = xy/10;
        y = xy%10;
        s[0]=(char)x;
        s[1]=(char)y;
        ans = s.substr(0,7);
        return ans;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}