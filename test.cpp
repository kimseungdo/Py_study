#include <iostream>


int ipower(int num, int index){
    if(index == 0)
        return 1;
    else
        return ipower(num, index-1) *num;

}
/*
n�� 3�̰� i�� ��� �ٲ�
i=0 �̸� index == 0�� �ɸ� ����� 1

i=1 �̸� index == 1 else�� ipower(3, 1) * 3 
    ~~~ �ٽ� ipower �Լ��� ���� index == 0�� �ɷ�����
    ��� = 3 * 1

i=2 �̸� index == 2 else�� ipower(3, 2) * 3
    ~~~ �ٽ� ipower �Լ��� ���� ipower(3, 1) * 3
    ~~~ �ٽ� ipower �Լ��� ���� index == 0�� �ɷ�����
    ��� =  3 * 3 * 1


i=3 �̸� index == 3 else�� ipower(3, 3) * 3
    ~~~ �ٽ� ipower �Լ��� ���� ipower(3, 2) * 3
    ~~~ �ٽ� ipower �Լ��� ���� ipower(3, 1) * 3
    ~~~ �ٽ� ipower �Լ��� ���� index == 0�� �ɷ�����
    ��� =  3 * 3 * 3 * 1
*/
int main(void){
    // �Է� 2�� 
    int n = 3, k = 5;
    
    // std::cin>> n;
    // std::cin>> k;
    for(int i=0; i<=k; i++)
        std::cout<< n << "�� " << i << " ����: " << ipower(n, i) << std::endl;

    return 0;
}