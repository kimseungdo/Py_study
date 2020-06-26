class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target){
        vector<int> res_v(2, 0);
        map<int, int> maching;
        
        for(int i=0; i<numbers.size(); i++){
            if ( maching.find(numbers[i]) == maching.end() )
            // iterator 반환  find(key) : key값에 해당하는 iterator를 반환
            // end() : end iterator를 반환 (타입은 자료의 마지막값 다음 메모리 주소이다. 이는 곧 비어있음을 의미한다. )
                maching[target - numbers[i]] = i; //
            else { 
                // found the second one
                res_v[0] = maching[numbers[i]];
                res_v[1] = i;
                break;
            }// end else
        }// end for i
        
        return res_v;
    }
    
};

/*
[1,2]

*/