//�������� ���� ������ ���� �߰��� ����� ������
//    counter++              counter=0
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(void){
    int n; cin>>n;
    
    for(int i=0; i<n; i++){ //�ٵ���
        string score; //�ִ빮�ڿ�
        cin>>score;

        int counter=0; //0�� ī����
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