#include <stdio.h>

#define array_size {}
void print_array_reverse(int* A, int size){

    printf("���� : ");
    for(int i=size-1; i>=0; i--){
        printf("%d ", A[i]);
    }printf("\n");

}
int main(void){
    int data[5] = {1, 2, 3, 4, 5};
    
    printf("5���� ������ �Է��Ͻÿ�:");
    for(int i=0; i < sizeof(data)/sizeof(int) ; i++){
        printf("%d ", data[i]);
    }printf("\n");

    print_array_reverse(data, sizeof(data)/sizeof(int));

    return 0;
}