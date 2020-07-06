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
        
        vector<int> a; // 앞?
        //vector<int> b; // 뒤?
        
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
하나의 링크드 리스트가 주어짐 
반 딱 짤라서 대칭이면 참 아니면 거짓임

반복문 한번에 메모리공간 1가능?
*/