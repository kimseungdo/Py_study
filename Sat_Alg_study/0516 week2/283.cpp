class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_count = 0;;
        
        for(int i=0; i<nums.size()-zero_count; i+=1){
            if(nums[i] == 0) {
                nums.erase(nums.begin() + i);
                nums.push_back(0);
                zero_count+=1;
                i--;
            }
        }
        
    }
};


/*
    You must do this in-place without making a copy of the array.
    Minimize the total number of operations.
    
    함수 구역안에 배열 복하지말고
    최소화 해라 
    0을 뒤로 밀어버리는

*/