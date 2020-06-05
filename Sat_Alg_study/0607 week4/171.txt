class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
        
        /*
        for(auto alpha : s){
            // res res * 26 + alpha -'A'
            // res * 26 + alpha - 'A'
            // res * 26 + alpha - 'A' + 1
            res = res * 26 + alpha - 'A' + 1;
        }
        */
         for(char alpha : s){
            res*=26;
            res+=alpha-'A'+1;
        }
        
        return res;
    }
};

/*
자리수 *26    'a' - 1 

자리수 *26    'a' + 1
*/