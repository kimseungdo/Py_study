class Solution {
public:
    int rob(vector<int>& nums) {
        //n-1 n-2
        if( nums.size() == 0 ) return 0;
        if( nums.size() == 2 ) return max(nums[0], nums[1]);
        if( nums.size() == 3 ) return max(nums[0], nums[1]);
        else if( nums.size() == 3 || nums[0] == nums[1] || nums[1] == nums[2] ) return nums[0];
        int res = nums[0]; // 첫집은 무조건 털음 
        bool check = false;
        // 첫집을 털었으니 true ~~
        // 을 털면 다음집 못털게 false 
        
        for(int i=2; i<nums.size(); ){ // [2,7,9,3,1]
            
            if( nums[i-1] < nums[i] || check == false ){ // 전항보다 다음항이 크면
                cout<< "nums : " << nums[i];
                    
                res += nums[i];
                i+=1;
                check = true; // 집을 털수있으니 true
            
                cout<< " res : " << res << " " << endl;
            }
            
            else if(nums[i-1] == nums[i] || check == false ){ // 뒷집이랑 같으면 패스하고 다음집
                i+=1;
                check = true;
            }
            else{
                i++;
                check = false;
            }
        }// end for
        /*
        int pre = 0, cur = 0;
        for (int num : nums) {
            int temp = max(pre+num, cur);
            pre = cur;
            cur = temp;
        }
        */
    
        return res;
        
    }
};

/*
넌 도둑인데 길에 있는 집을 털거임
각 요소는 집에있는 돈임 털고 또털면 경찰이 옴
 
자동으로 순찰함
2뛰기 홀 / 짝?? 

[2,1,1,2] 3 /4 
홀짝문ㅇ제 X
==========
[2,7,9,3,1] 
[1,2,3,1] 3 / 4

[]
[1,2]
[1,3,1]
*/