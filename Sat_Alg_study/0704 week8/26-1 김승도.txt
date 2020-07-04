class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};
/*
정렬된 배열이 주어진다 쌍둥이 배여ㅑㄹ을 지워라
하나밖에없으면 길이를 반환해라
새로운 배열을 만들지말고 너는 반드시 입력된 배열을 모디해라

[0,0,1,1,1,2,2,3,3,4]
[0,1,1,1,2]
*/