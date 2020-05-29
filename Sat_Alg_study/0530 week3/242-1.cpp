class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length())
            return false;
        
        else{
            int alpha[26] = {0, };

            for(int i=0; i<s.size(); i+=1){
                alpha[s[i] - 'a']++; // 문자열 알파벳을 배열에 넣음
                alpha[t[i] - 'a']--;
            }

            for(int a : alpha)
                if(a != 0)
                    return false;
            
            return true;
        }//end else
    }
};
/*

only lowercase alphabets. 오로지 소문자만

Given two strings s and t , write a function to determine if t is an anagram of s.
2개 문자열 s와 t가 주어진다 써라 함수를 문자 바꿔도 일치한가?
유니코드 입력받았어 어떻게 너는 적용할것인가 너의 경우를
===========================================================
"a"
"ab"

"anagram" aaa n r m g
"nagaram"

*/

