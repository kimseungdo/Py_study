#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// 중복없는 하나의 수 리턴
class Solution {
public:
    //int count=0;
    //int result=0;

    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // 1 2 2
        
        if(nums.size() == 0)
            return nums[0];
        else{
            for(int i=0; i< nums.size()-1; i+=2){
                if(nums[i] != nums[i+1]) return nums[i];
            }
        }
        return nums[nums.size()-1]; // 벡터 맨 마지막요소?
    }
};

int main(void){
    Solution *S = new Solution();
    vector<int> abc = {2,2,1};
    S->singleNumber(abc);

    delete S;
    return 0;
}