#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIMENSION_SIZE 6

int main(void){
    
    int s[DIMENSION_SIZE] = {0, }; //�迭 ����� �ʱ�ȭ
    int i; //�ݺ���
    int num; //�����Լ� ������ ����

    srand(time(NULL));

    for(i=0; i<DIMENSION_SIZE; i++){
        s[i] = rand() % 60000; //��������
        printf("%d  ", s[i]);

        for(int j=0; j<i; j++){ //�ߺ��˻�
            if(s[i] == s[j]){ //�迭 ��Ұ� �ߺ��� �߻��Ѵٸ�
                i--; //�ߺ��� �߻������� �ε��� ����
                break;//�ݺ��� ����
            }//�ݺ��� Ż��� ���ÿ� ���� �ε����� ���ư��� ���
        }//end for
    }
    
    //for (i=0; i<DIMENSION_SIZE; i++)  printf("%d\n", s[i]);
    
    printf("=========================\n");
    printf("��\t��\n");
    printf("=========================\n");

    for (i=0; i<DIMENSION_SIZE; i++) // ��º�
        printf("%d\t%d\n", i + 1, s[i]);
    
    
    int max = s[0];
    //�ִ밪�� ���ϱ����� ù��° ���� ���� ~~ ���彬�� ��������
    int index; //�ִ밪 �迭 ������ ����ϱ����� ����
    
    for(i=0; i<DIMENSION_SIZE; i++){ // ���ĺ�
    //�迭 ��� �ȿ� �ִ� ���� �˻� �ؾߵǼ� ��ü ��������� �˻��ؾ���
        if (max < s[i]){ //max�� ���� ū s[i]���� ��Ÿ����
            max = s[i]; //ū�� s[i]�� max�� ���� ~~ max���� s[i]
            index = i+1; //ū���� �޾����� �迭 �ε��� ��ȣ ����
        }// i�� DIMENSION ���� �ݺ�
    }//end for
    printf("���� ���� ������ ���� %d���Դϴ�.", index);
    
    return 0;
}