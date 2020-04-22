#include <iostream>
#include <random>
#include "stdlib.h"

using namespace std;


void Get_2d_matrix(int &d){
    
    for(int i=0; i<d; i++){ // B-0 G-1 R-2 
        for(int j=0; j<d; j++){
            int nColor_random = rand();
            
            switch(nColor_random % 3){
                case 0:
                    cout << "B ";
                    break;
                case 1:
                    cout << "G ";
                    break;
                case 2:
                    cout << "R ";
                    break;
                default:
                    cout << "random ERR" << endl;
                    exit(0);
                    break;
            };

            //cout << "X ";
        }cout << endl;
    }

}

int main(void){
    int d;

    cin >> d;
    char szColor_2d_arr[d][d];

    /*cout << "N : " << d << endl;
    
    for(int i=0; i<d; i++){
        for(int j=0; j<d; j++){
            szColor_2d_arr[i][j] = '0';
        }
    }
    Get_2d_matrix(d);
    */

    for(int i=0; i<d; i++){ // B-0 G-1 R-2 
        for(int j=0; j<d; j++){
            int nColor_random = rand();
            
            switch(nColor_random % 3){
                case 0:
                    szColor_2d_arr[i][j] = 'B';
                    cout << szColor_2d_arr[i][j] << " ";
                    break;
                case 1:
                    szColor_2d_arr[i][j] = 'G';
                    cout << szColor_2d_arr[i][j] << " ";
                    break;
                case 2:
                    szColor_2d_arr[i][j] = 'R';
                    cout << szColor_2d_arr[i][j] << " ";
                    break;
                default:
                    cout << "random ERR" << endl;
                    exit(0);
                    break;
            };
        }cout << endl;
    }
    /*
    구역은 같은 색으로 이루어져 있다. 또, 같은 색상이 상하좌우로 인접해 있는 경우에
    두 글자는 같은 구역에 속한다.

    RRRBB
    GGBBB
    BBBRR
    BBRRR
    RRRRR

    적록색약이 아닌 사람이 봤을 때 구역의 수는 총 4개이다. (빨강 2, 파랑 1, 초록 1)
    하지만, 적록색약인 사람은 구역을 3개 볼 수 있다. (빨강-초록 2, 파랑 1)

    그림이 입력으로 주어졌을 때, 적록색약인 사람이 봤을 때와 아닌 사람이 봤을 때
    구역의 수를 구하는 프로그램을 작성하시오.

    적록색약이 아닌 사람이 봤을 때의 구역의 개수와
    적록색약인 사람이 봤을 때의 구역의 수를 공백으로 구분해 출력한다.
    =========================
    인접노드 경계로 구역을 나눔
    아닌사람은 적록을 하나로
    */  
   int nNormal_p;
   int nUnnormal_p;

   for(int i=0; i>d; i++){
       for(int j=0; j>d; j++){
            /*
            배열이 처음과 끝
            i==0 j==0 i++ // j++ // i++ j++
            
            i==0

            i==d 
            
            i==d j==d i-- // j-- // i-- j--
                
            j==0

            j==d
            
                
            */

           //if(szColor_2d_arr[i][j])
           
       }
   }
    return 0;
}