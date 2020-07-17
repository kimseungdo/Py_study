#pragma GCC optimize ("Ofast")
static auto speedup =[]{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cerr.tie(0);
    return 0; 
}();

class Solution {
public:
    bool isPalindrome(string s) {
        if(s == "") return true;
        string ns = "";
        
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){ // 알파벳이거나 숫자면
                ns += tolower(s[i]); // 소문자로 저장한다
            }
        } //end for
        
        int i = 0; // 문자열 첫번째부터
        int j = ns.length()-1; // 개행 마지막까지
        
        while(i<=j){ // 처음이 끝보다 작을때까지
            if(ns[i]==ns[j]){ // 처음과 끝 문자가 같으면 좁혀나감
                i++;
                j--;
            }
            else
                return false;
        }
        
        return true;
    }
};