class Solution {
public:
    int mySqrt(int x) {
        return pow(2, 0.5*log2(x));
    }
};

/*
제ㅐ곱근 구해 음수는 없다
정수형 반환해라 소수점 나오면 잘라내라

*/ 