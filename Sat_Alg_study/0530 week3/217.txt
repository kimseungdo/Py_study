class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() == 0 ||
            nums.size() == 1)
            return false;
        
        else{
            sort(nums.begin(), nums.end());
            
            for(int i=0; i<nums.size()-1; i+=1)
                if(nums[i]==nums[i+1])
                    return true;
            
        }//end else

        return false;
    }//end bool func
};

/*
정수형 배열을 줬다 2개이상 배열을 찾아
2개이상이면 참 아니면 fase반환
================================
[]
[0]

[3,1]
[1,5,-2,-4,0] asdfasdfasdfasdf fuck
*/