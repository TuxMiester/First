class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator i;
        int count = 0;
        int n = nums.size();
        for(i=nums.begin();i!=nums.end();++i){
            if(*i!=val){
                nums[count] = *i;
                count++;
            }
        }
        return (count);
    }
};