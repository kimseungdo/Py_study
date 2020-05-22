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
    
    최소 2개이상
    모든 노드는 원자값 == 중복없음
    주어진다 꼬리값ㅇ ㅣ??? tail??? 항상 유효한 노드다
    함수 리턴 하지마
*/