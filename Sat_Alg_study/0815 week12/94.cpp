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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        TreeNode* now = root;
        /*
        L(l~r) -> r -> R(l~r)
        */
        while(root != NULL){
            if (root->left) { // 우측값이 존재한다면
                std::cout<< "left : " << root->val <<std::endl;
                
                now = root->left; // 우측값 저장
                //std::cout<< "now : " << now->val <<std::endl;
                
                if (now->right){ // 우측 오른쪽값이 있으면 내려감
                    now = now->right;
                    //std::cout<< "end right : " << now->val <<std::endl;
                
                }
                //cout<< "root : "<< root->val << " now : " << now->val << endl<< "root right : " << root->right->val <<" now right : "<< now->right->val << endl;
                root = now;
                
            }
            else { // 우측값이 아니라면
                std::cout<< "right : " << root->val <<std::endl;
                res.push_back(root->val);
                root = root->right;
            }
            
        }
        return res;
    }
};
/*
2진트리가 주어짐 인오더방식으로 값을 돌아다니는?
재귀로 할수있어?

[3,1,null,null,2]

*/

