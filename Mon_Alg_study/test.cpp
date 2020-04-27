//연속으로 맞은 점수만 인정 중간에 끊기면 노인정
//    counter++              counter=0
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(void){
    int n; cin>>n;
    
    for(int i=0; i<n; i++){ //줄따리
        string score; //최대문자열
        cin>>score;

        int counter=0; //0셀 카운터
        int sum_c=0;
        for(int j=0; j<score.size(); j++){
            if(score.at(j) == 'O')    counter++;
            else if(score.at(j) == 'X')    counter=0;
            sum_c+=counter;
        }
        cout << sum_c << endl;
    }
    return 0;
}