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
        
        ListNode* l3 = new ListNode(0); // 0 ����
        ListNode* l3_head = l3; //�Ӹ��� ������
        
        while(l1 != NULL && l2 != NULL){
            
            if( (l1->val) <= (l2->val) ) { // �������� �ڷ� ����
                l3_head->next = l1;
                l1 = l1->next;
            }
            
            else{ // ū���� �ڷ� ����
                l3_head->next = l2;
                l2 = l2->next;
            }//end else
            
            l3_head = l3_head->next; //�Է��� ������ 
        }//end while
            
        if(l1) l3_head->next = l1; //ã�� 
        if(l2) l3_head->next = l2;
        
        return l3->next;
    }
    
};

/*
���ĵ� �� ����Ʈ ��ġ��
The new list should be made by splicing together the nodes of the first two lists.
���ο� ����Ʈ�� �ݵ�� �������Ѵ� �� ��带 ���ļ� ������ ������

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

[4]
ListNode* l3 = new ListNode(0); // 0 ����
        
Time Limit Exceeded
ListNode* l3_head = l3; //�Ӹ� 0��°

[]
return l3->next;


[1,1,2,3,4] 4�� ���ΰ���?

        if(l1) l3_head->next = l1; //ã�� 
        if(l2) l3_head->next = l2; �ذ�
*/
