class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         
        if(strs.size() == 0) return "";
        /*
        input ["flower","flow","flight"]
        sort(strs.begin(), strs.end());
        out flight flow flower
        */
        sort(strs.begin(), strs.end());
        
        string res = strs[0];
        
        for(int i=0; i<strs.size(); i++){
            
            for(int j=0; j<strs[i].size(); j++){
                //cout<< strs[i][j] << " " ;
                
                if(res[j] != strs[i][j]){
                    res.replace(j, res.size()-j, "");
                    //cout<< strs[i][j] << " res : " << res << endl;
                    break;
                }
                
            }//end for j
            
        }// end for i
        
        return res;
    }
};

/*
연속된 공통문자를 찾아라>?
소문자만 주어진다

[]
["aa","a"]
*/