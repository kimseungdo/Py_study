class Solution {
public:
    int strStr(string haystack, string needle) {
        //return haystack.find(needle);
                
        int neeLen = needle.size();
        int hayLen = haystack.size();
        
        if( (neeLen == 0 && hayLen == 0) || neeLen == 0) return 0;
        
        
        int counter = 0;
        
        for(int i=0; i<hayLen-neeLen; i++){
            if(haystack[i] == needle[0]){
                int j=0;
                for (; j<neeLen; j++) {
                    if (haystack[i + j] != needle[j]) break;
                }// end for
                
                if(j == neeLen) return i;
            }
            
        }
        
        return -1;
    }
};

/*
니들 문자열이 헤이스택에 있으면 시작 인덱스 반환하고
아니면 -1

"" ""
"" "a"
"a" ""
"a" "a"
*/