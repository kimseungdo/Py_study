class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        for (int i = 0; i < s.length(); i++) {

            switch (s[i]) {
                case 'M': { // 1000
                    if (i > 0 && s[i-1] == 'C') res += 800; // M ~~ 1000 - MC
                    else res += 1000;
                    break;
                }
                case 'D': { // 500
                    if (i > 0 && s[i-1] == 'C') res += 300; //DC 
                    else res += 500;
                    break;
                }
                case 'C': { // 100
                    if (i > 0 && s[i-1] == 'X') res += 80;
                    else res += 100;
                    break;
                }
                case 'L': { // 50
                    if (i > 0 && s[i-1] == 'X') res += 30;
                    else res += 50;
                    break;
                }
                case 'X': { // 10
                    if (i > 0 && s[i-1] == 'I') res += 8;
                    else res += 10;
                    break;
                }
                case 'V': { // 5
                    if (i > 0 && s[i-1] == 'I') res += 3; // vi == 3
                    else res += 5;
                    break;
                }
                case 'I': {
                    res += 1;
                    break;
                }
                default: return 0;
            }//end switch
        }//end for
        return res;
    }
};

/*
switch

I             1
V             5
X             10
L             50
C             100
D             500
M             1000

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.


||

X 10
C 100
M 1000
~~~~~~~~~~~~~~~~~~~~~~~


*/