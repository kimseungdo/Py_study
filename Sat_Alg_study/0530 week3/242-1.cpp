class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length())
            return false;
        
        else{
            int alpha[26] = {0, };

            for(int i=0; i<s.size(); i+=1){
                alpha[s[i] - 'a']++; // ���ڿ� ���ĺ��� �迭�� ����
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

only lowercase alphabets. ������ �ҹ��ڸ�

Given two strings s and t , write a function to determine if t is an anagram of s.
2�� ���ڿ� s�� t�� �־����� ��� �Լ��� ���� �ٲ㵵 ��ġ�Ѱ�?
�����ڵ� �Է¹޾Ҿ� ��� �ʴ� �����Ұ��ΰ� ���� ��츦
===========================================================
"a"
"ab"

"anagram" aaa n r m g
"nagaram"

*/

