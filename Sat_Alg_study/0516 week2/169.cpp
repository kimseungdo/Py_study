class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // ������ ���
        
        sort(nums.begin(), nums.end());
        int halfnums = nums.size()/2;
        return nums[halfnums];
        //[-1,1,1,1,2,1]
        
    }
};