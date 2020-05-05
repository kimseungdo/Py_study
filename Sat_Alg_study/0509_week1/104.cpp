#include <iostream>
#include <vector>

#include <algorithm>

using namespace std;
/**
 * Definition for a binary tree node. 2ÁøÆ®¸®
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        int depth = 0;

        return depth;    
    }

};

int main(void){
    Solution *S = new Solution();
    vector<int> abc = {3,9,20,NULL,NULL,15,7};
    //S->maxDepth(abc);

    delete S;
    return 0;
}