class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target){
        vector<int> res_v; // 1000ms
        vector<int> res_v(2, 0); // 500ms
        for(int i=0; i<numbers.size(); i++){
            for(int j=i+1; j<numbers.size(); j++){
                if(numbers[i] + numbers[j] == target){
                    res_v.push_back(i);
                    res_v.push_back(j);
                }
            }// end for j
        }// end for i
        return res_v;
    }
};