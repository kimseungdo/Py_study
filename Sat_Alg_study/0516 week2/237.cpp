/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        *node = *(node -> next);
    }
};

/*
    The linked list will have at least two elements.
    All of the nodes' values will be unique.
    The given node will not be the tail and it will always be a valid node of the linked list.
    Do not return anything from your function.
    
    �ּ� 2���̻�
    ��� ���� ���ڰ� == �ߺ�����
    �־����� �������� ��??? tail??? �׻� ��ȿ�� ����
    �Լ� ���� ������
*/