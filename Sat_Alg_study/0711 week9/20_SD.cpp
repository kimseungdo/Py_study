class Solution {
public:
    bool isValid(string s) {
        //for(int i=0; i<s.size(); i++) cout<< (int) s[i] << " "; cout<< endl;
                
        /*
        ()  40  41   1    
        []  91  93   2
        {} 123  125  2
        */
        
        /*
        unordered_map<char, char> door = {
            { '[', ']' },
            { '(', ')' },
            { '{', '}' },
        };*/
        
        stack<char> dooor;
        char dr;
        
        for(char i: s){
            switch(i){
                case '(':
                case '{':
                case '[':
                    dooor.push(i);
                    break;
                // ???????? ???????
                

                //??????? ?? ?????? ?????
                case ')': {
                    if(!dooor.empty()){ //?????? ??????? ??????
                        dr = dooor.top(); //?????? ????? ???
                        dooor.pop(); //?????? ????
                    }
                    if(dr != '(')
                        return false;
                    break;
                }
                case '}': {
                    if(!dooor.empty()){ 
                        dr = dooor.top();
                        dooor.pop();   
                    }
                    if(dr != '{')
                        return false;
                    break;
                }
                case ']': {
                    if(!dooor.empty()){
                        dr = dooor.top();
                        dooor.pop();   
                    }
                    
                    if(dr != '[')
                        return false;
                    break;
                }
            }
        }//end switch
        return dooor.empty();
    }
};

/*
????? ????? ????? ???? ?��? ?????? ??

*/