#include <iostream>
#include <cmath>

using namespace std;
int mySqrt(int x) {
        return pow(2, 0.5*log2(x));
}
int strStr(string haystack, string needle) {
        return haystack.find(needle);
}
int main(void){

    string a = "abcdefg";
    string b = "cd";
    string c = "ee";

    cout<< a.find(b) <<endl;
    cout<< a.find(c) <<endl;

    cout<< strStr(a, b) <<endl;
    cout<< strStr(a, c) <<endl;

    int x = 4;
    cout<< 0.5*log2(x) <<endl; // = 1
    cout<< 0.5*log2(x)*2 <<endl;

    x = 9;
    cout<< 0.5*log2(x) <<endl; // = 1.5
    cout<< 0.5*log2(x)*2 <<endl; // = 3.1
    cout<< pow(2, 0.5*log2(x)) <<endl<<endl;

    x = 8;
    cout<< 0.5*log2(x) <<endl; // = 1.7
    cout<< 0.5*log2(x)*2 <<endl; // = 3.4
    cout<< pow(2, 0.5*log2(x)) <<endl<<endl;

    double aaa = 2.1;
    cout<< (int) aaa <<endl<<endl;

    cout<< mySqrt(x);

    return 0;
}