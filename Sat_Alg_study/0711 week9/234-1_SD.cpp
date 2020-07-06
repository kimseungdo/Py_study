/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL) return true;
        
        vector<int> a; // ��?
        //vector<int> b; // ��?
        
        while(head != NULL){
            a.push_back(head->val);
            //b.insert(b.begin(), head->val);
            head = head->next;
        }
        
        //cout<< "a : "; for(int i=0; i<a.size(); i++) cout<< a[i] << " "; cout<< endl;
        //cout<< "b : "; for(int i=0; i<b.size(); i++) cout<< b[i] << " "; cout<< endl;
        
        
        for(int i=0; i<a.size()/2; i++)
            //if(a[i] != b[i]) return false;
            if(a[i] != a[a.size()-i-1]) return false;
        
        return true;
    }
};

/*
�ϳ��� ��ũ�� ����Ʈ�� �־��� 
�� �� ©�� ��Ī�̸� �� �ƴϸ� ������

�ݺ��� �ѹ��� �޸𸮰��� 1����?
*/