
bool Compare_Interval(long long a, long long b){
    string s1=to_string(a),s2=to_string(b);
    string s3=s1+s2;
    string s4=s2+s1;
    return s3>s4;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<unsigned long long> B;
    for(int i=0;i<A.size();i++)
    {
        B.push_back(A[i]);
    }
    sort(B.begin(),B.end(),Compare_Interval);
    string s;
    for(int i=0;i<B.size();i++){
        s=s+to_string(B[i]);
    }
    if(s[0]=='0' && s[s.size()-1]=='0'){
        s="0";
    }
    return s;
}
