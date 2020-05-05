#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> tmpV = {};
    void reverseString(vector<string>& s) {
        for(int i=s.size()-1; i>=0; i--)
            tmpV.push_back(s[i]);
        s=tmpV;
    }
    
};

int main(void){
    Solution *S1 = new Solution();

    vector<string> dd = {"h","e","l","l","o"};
    S1->reverseString(dd);
    delete S1;

    return 0;
}