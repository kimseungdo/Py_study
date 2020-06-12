class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vt2d;
        
        for(int i=0; i<numRows; i++){
            
            vector<int> vt1d(i+1, 1); 
            /*
            i=0 1
            i=1 11
            i=2 111 j
            ~~~
            */
            
                for(int j=1; j<i; j++){
                    vt1d[j] = vt2d[i-1][j] + vt2d[i-1][j-1];

                //end for
            } 
            vt2d.push_back(vt1d);
        }
        
        
        return vt2d;
    }
};

/*
[[1],[1,1],[1,1,1],[1,1,1,1],[1,1,1,1,1]]
[[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

i=2 j=1 1{1}1 ->  vt2d Àü¿ä¼Ò 

[[1],[1,1],[1,1,1],[1,2,2,1],[1,3,4,3,1]]
[[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
*/