class Solution {
public:
    string largestOddNumber(string num) {
        int len = num.length();
        for(int i=(len-1);i>=0;i--){
            if((num[i]-'0')%2==0){
                num.erase(num.begin()+i);
            }
            else if((num[i]-'0')%2!=0){
                return num;
            }
        }
        if(num=="0"){
            return " ";
        }
        return num;
    }
};