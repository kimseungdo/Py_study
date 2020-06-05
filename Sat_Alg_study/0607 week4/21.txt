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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* l3 = new ListNode(0); // 0 생성
        ListNode* l3_head = l3; //머리는 시작점
        
        while(l1 != NULL && l2 != NULL){
            
            if( (l1->val) <= (l2->val) ) { // 작은놈이 뒤로 붙음
                l3_head->next = l1;
                l1 = l1->next;
            }
            
            else{ // 큰놈이 뒤로 붙음
                l3_head->next = l2;
                l2 = l2->next;
            }//end else
            
            l3_head = l3_head->next; //입력이 끝나면 
        }//end while
            
        if(l1) l3_head->next = l1; //찾음 
        if(l2) l3_head->next = l2;
        
        return l3->next;
    }
    
};

/*
정렬된 두 리스트 합치기
The new list should be made by splicing together the nodes of the first two lists.
새로운 리스트는 반드시 만들어야한다 각 노드를 합쳐서 나눈걸 정렬해

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

[4]
ListNode* l3 = new ListNode(0); // 0 생성
        
Time Limit Exceeded
ListNode* l3_head = l3; //머리 0번째

[]
return l3->next;


[1,1,2,3,4] 4는 어디로갔누?

        if(l1) l3_head->next = l1; //찾음 
        if(l2) l3_head->next = l2; 해결
*/
