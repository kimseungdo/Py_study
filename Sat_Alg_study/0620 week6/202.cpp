class Solution {
public:
    bool isHappy(int n) {
        string stnum = to_string(n);
        int res = 0;
        //stoi
        while(true){
            
            for(int i=0; i<stnum.size(); i++){//자리수만큼 합
                res += pow(atoi(stnum[i]), 2);
            }
            if(res == 1) return true;
            
                
        }
        
    }
    
    int DD(int n){
        return n*n;
    }
};

/*
리턴수를 계속 뭐시기 해서 결과가 1이 나오면 참이다
false는 없다?

*/