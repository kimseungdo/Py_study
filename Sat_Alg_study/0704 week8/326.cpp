class Solution {
public:
    bool isPowerOfThree(int n) {
        while (n >= 3) {
            if (n % 3 != 0) return false;
            n /= 3;
        }// end while
        
        if(n == 1){
            return true;
        }
        else return false;
    }
};

/*
������ ���� 3�������� ����

0
*/