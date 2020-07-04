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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> aa;
        //map<ListNode*, int> aa;
        while(head != NULL){
            if(aa[head] > 0) return true;
            aa[head]++;
            
            cout<< head->val << " ";
            
            head = head -> next;
            
        }
        return false;
    }
};