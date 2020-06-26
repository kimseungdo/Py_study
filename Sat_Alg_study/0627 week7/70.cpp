class Solution {
public:
    int climbStairs(int n) {
        
        if(n==1 || n==2 || n==3) return n;
        
        vector<long long> pe;
        pe.push_back(1); //1
        pe.push_back(2); //2
        
        //cout<< pe[0]<< " " << pe[1];
        
        for(int i=2; i<=n; i++)
            pe.push_back( pe[i-1] + pe[i-2] );
        //
        
        for(int i=0; i<n; i++) std::cout<< pe[i] << " ";
        return pe[n-2]+pe[n-3];
    }
    
};

/*
계단을 오르는 경우의수를 반환해
1 or 2스텝만 올라감

2 ~~ 1/1 2 || 2 n=n
3 ~~ 1/1/1 2/1 1/2 || 3 n+n-1
4 ~~ 1/1/1/1 2/1/1 1/2/1 1/1/2 2/2 ||5 
피보?
Last executed input 3

stdout 1 2 3 6 p[n-1]+p[n-2];
===========================
*/
