class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        /*
        while(k--){
            nums.insert(nums.begin(), nums.back());
            nums.pop_back();
        }
        k�ڴ� ������
        k���� �ڷ�
        */
        if(k>nums.size()) k-=nums.size();
        
        vector<int> res;
        for(int i=nums.size()-k; i<nums.size(); i++){
            res.push_back(nums[i]);
            //res[i] = nums[i];
        }
        for(int i=0; i<nums.size()-k; i++)
            res.push_back(nums[i]);
            
        nums = res;
        res.clear();
    }
};
/*
Time Limit Exceeded
size 1 
[1,2] 3 �ε��� �ʰ�

*/