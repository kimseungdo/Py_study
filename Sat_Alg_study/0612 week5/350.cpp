class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.empty() || nums2.empty())
			return vector<int>();
        
        map<int, int> m;
        vector<int> res;
        
        for(int i=0; i<nums1.size(); i++)   ++m[nums1[i]];//값입력
        for(int i=0; i<nums2.size(); i++){//비교
            if(m[nums1[i]] > 0){
                res.push_back(nums2[i]);
                --m[nums2[i]];
            }
        }//end for
        
        
        return res;    
    }
};


/*
양쪽 둘다 있는걸 구해라
=========================

[4,9,5]
[9,4,9,8,4]
*/