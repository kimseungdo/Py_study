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
������ �迭�� ��� 2���̻� �迭�� ã��
2���̻��̸� �� �ƴϸ� fase��ȯ
================================
[]
[0]

[3,1]
[1,5,-2,-4,0] asdfasdfasdfasdf fuck
*/