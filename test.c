#include <stdio.h>

int main(void) {

   char ch[100];
   char stop[10] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };

   printf("텍스트를 입력한다: ");
   gets_s(ch, 99);

   for (int i = 0; i < 100; i++) {
      for (int j = 0; j < 10; j++) {
         if (ch[i] == stop[j])
            for (int k = i; k < 99; k++)
               ch[k] = ch[k + 1];
         
      }
   }


         ch    =   A  B  C  \n

ch[0] = ch[1]  =   B  B  C  \n
    
ch[1] = ch[2]  =   B  C  C  \n

ch[2] = ch[3]  =   B  C  \n
   int a = 1;
   
return 0;
}