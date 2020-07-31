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
�ϵ� ���ڿ��� ���̽��ÿ� ������ ���� �ε��� ��ȯ�ϰ�
�ƴϸ� -1

"" ""
"" "a"
"a" ""
"a" "a"
*/