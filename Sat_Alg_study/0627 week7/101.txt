/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return aaa(root->left, root->right);
    }
    bool aaa(TreeNode* L, TreeNode* R){
        if(L == NULL && R == NULL) return true; // 둘 노드 값이 끝까지 간거니까 1
        if(L == NULL || R == NULL) return false; // 둘 노드가 값이 하나라도 없으면 0
        return L->val == R->val && aaa(L->left, R->right);
        
    }
};

/*
2진트리가 주어짐 너는 대칭인지 확인해라
=========================
Input[1,2,3]
Output true
Expected false


[2,3,3,4,5,null,4]
*/