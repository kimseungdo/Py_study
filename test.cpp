#include <iostream>


int ipower(int num, int index){
    if(index == 0)
        return 1;
    else
        return ipower(num, index-1) *num;

}
/*
n은 3이고 i가 계속 바뀜
i=0 이면 index == 0에 걸림 결과는 1

i=1 이면 index == 1 else의 ipower(3, 1) * 3 
    ~~~ 다시 ipower 함수로 들어가면 index == 0에 걸려버림
    결과 = 3 * 1

i=2 이면 index == 2 else의 ipower(3, 2) * 3
    ~~~ 다시 ipower 함수로 들어가면 ipower(3, 1) * 3
    ~~~ 다시 ipower 함수로 들어가면 index == 0에 걸려버림
    결과 =  3 * 3 * 1


i=3 이면 index == 3 else의 ipower(3, 3) * 3
    ~~~ 다시 ipower 함수로 들어가면 ipower(3, 2) * 3
    ~~~ 다시 ipower 함수로 들어가면 ipower(3, 1) * 3
    ~~~ 다시 ipower 함수로 들어가면 index == 0에 걸려버림
    결과 =  3 * 3 * 3 * 1
*/
int main(void){
    // 입력 2개 
    int n = 3, k = 5;
    
    // std::cin>> n;
    // std::cin>> k;
    for(int i=0; i<=k; i++)
        std::cout<< n << "의 " << i << " 제곱: " << ipower(n, i) << std::endl;

    return 0;
}