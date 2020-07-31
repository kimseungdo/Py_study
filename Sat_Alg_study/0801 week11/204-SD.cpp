class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        
        int res=0; // 2이상의 값이니까 2포함
        int i=0, j=0;
        
        for(i=1; i<n; i++){
            
            for(j=2; j<=i; j++){
                if(i%j == 0) break;
                
            }// end for
        
            if (i == j){
                cout<< i << " " << j << endl;
                res++;
            }
            
        }
        
        return res;
        
    }
};
/*
소수구하기

1
0
4
5

499979 ????

*/