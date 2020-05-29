class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(t.begin(), t.end());
        sort(s.begin(), s.end());
        return s==t;
    }
};

//Given two strings s and t , write a function to determine if t is an anagram of s.
//2개 문자열 s와 t가 주어진다 써라 함수를 문자 바꿔도 일치한가?
//