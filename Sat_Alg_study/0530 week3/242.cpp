class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(t.begin(), t.end());
        sort(s.begin(), s.end());
        return s==t;
    }
};

//Given two strings s and t , write a function to determine if t is an anagram of s.
//2�� ���ڿ� s�� t�� �־����� ��� �Լ��� ���� �ٲ㵵 ��ġ�Ѱ�?
//