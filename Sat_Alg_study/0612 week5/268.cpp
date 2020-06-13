#include <vector>

class Solution {
    public: int missingNumber(vector<int>& nums) { 
        //vector<int> cpy(nums.size(), 0); 
        vector<int> cpy;
        for (int i = 0; i <= nums.size(); ++i)
            cpy.push_back(0); 
        
         for (int i = 0; i < nums.size(); ++i) 
             ++cpy[nums[i]]; 
        
        for (int i = 0; i < cpy.size(); ++i) 
            if (cpy[i] == 0) return i; 
        
        return 0; 
    } 
};

/*
�����ؼ� �Ҿ���� �ε��� ã�ƶ�
*/