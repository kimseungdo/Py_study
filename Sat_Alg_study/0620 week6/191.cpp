class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter = 0;
        //32
        
        for(auto i=0; i<32; i++){
            int res = i&n;
            //std::cout<< "i = "<< i << " n = " << n << " res = " <<  (1<<res) << endl;
            
            if( 1<< i&n ){
              //counter++; //??
                std::cout<< (1<<i&n) <<std::endl;
                
            }//cout<< typeid(i).name() <<endl;
        }
        return counter;
    }
};



