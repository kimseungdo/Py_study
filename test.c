#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIMENSION_SIZE 6

int main(void){
    
    int s[DIMENSION_SIZE] = {0, }; //배열 저장과 초기화
    int i; //반복문
    int num; //랜덤함수 저장할 변수

    srand(time(NULL));

    for(i=0; i<DIMENSION_SIZE; i++){
        s[i] = rand() % 60000; //난수생성
        printf("%d  ", s[i]);

        for(int j=0; j<i; j++){ //중복검사
            if(s[i] == s[j]){ //배열 요소가 중복이 발생한다면
                i--; //중복이 발생했으니 인덱스 감소
                break;//반복문 종료
            }//반복문 탈출과 동시에 이전 인덱스로 돌아가서 덮어씀
        }//end for
    }
    
    //for (i=0; i<DIMENSION_SIZE; i++)  printf("%d\n", s[i]);
    
    printf("=========================\n");
    printf("면\t빈도\n");
    printf("=========================\n");

    for (i=0; i<DIMENSION_SIZE; i++) // 출력부
        printf("%d\t%d\n", i + 1, s[i]);
    
    
    int max = s[0];
    //최대값을 구하기위해 첫번째 인자 지정 ~~ 가장쉬운 버블정렬
    int index; //최대값 배열 번지를 기억하기위해 지정
    
    for(i=0; i<DIMENSION_SIZE; i++){ // 정렬부
    //배열 요소 안에 있는 값을 검사 해야되서 면체 사이즈까지 검사해야함
        if (max < s[i]){ //max값 보다 큰 s[i]값이 나타나면
            max = s[i]; //큰값 s[i]를 max에 저장 ~~ max값은 s[i]
            index = i+1; //큰값을 받았으면 배열 인덱스 번호 저장
        }// i가 DIMENSION 까지 반복
    }//end for
    printf("가장 많이 생성된 면은 %d면입니다.", index);
    
    return 0;
}