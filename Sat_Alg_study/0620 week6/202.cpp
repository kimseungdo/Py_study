class Solution {
public:
    bool isHappy(int n) {
        string stnum = to_string(n);
        int res = 0;
        //stoi
        while(true){
            
            for(int i=0; i<stnum.size(); i++){//�ڸ�����ŭ ��
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
���ϼ��� ��� ���ñ� �ؼ� ����� 1�� ������ ���̴�
false�� ����?

*/