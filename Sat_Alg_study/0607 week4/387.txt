class Solution {
public:
    int firstUniqChar(string s) {
        int alpha[26] = {0, };
        
        for(char a : s)
            alpha[a-97]++;
        
        for(int i=0; i<s.size(); i++)
            if(alpha[s[i] - 97] == 1)
                return i;
        
        return -1;
    }
};

/*
문자열이 주어진다
첫번째로 중복없는 문자 인덱스 반환해라 없으면 -1을
소문자만 나옴


~~~~~~~~~~~~~
2
11
*/