class Solution {
public:
    int arraySign(vector<int>& nums) {
        int mul=1;
        for(auto i:nums)
            mul*=i>0?1:i==0?0:-1;
        return mul;
    }
};