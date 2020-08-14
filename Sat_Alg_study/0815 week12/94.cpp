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
            if (root->left) { // �������� �����Ѵٸ�
                std::cout<< "left : " << root->val <<std::endl;
                
                now = root->left; // ������ ����
                //std::cout<< "now : " << now->val <<std::endl;
                
                if (now->right){ // ���� �����ʰ��� ������ ������
                    now = now->right;
                    //std::cout<< "end right : " << now->val <<std::endl;
                
                }
                //cout<< "root : "<< root->val << " now : " << now->val << endl<< "root right : " << root->right->val <<" now right : "<< now->right->val << endl;
                root = now;
                
            }
            else { // �������� �ƴ϶��
                std::cout<< "right : " << root->val <<std::endl;
                res.push_back(root->val);
                root = root->right;
            }
            
        }
        return res;
    }
};
/*
2��Ʈ���� �־��� �ο���������� ���� ���ƴٴϴ�?
��ͷ� �Ҽ��־�?

[3,1,null,null,2]

*/

