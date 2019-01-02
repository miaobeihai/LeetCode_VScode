/*Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Note: A leaf is a node with no children.

Example:

Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
return its depth = 3.*/

//<![CDATA[/** add note：Name$ by creator：Author$ at datetime：Date$ **/ end$]]>
#include <iostream>
#include<algorithm>
#include<stack>
#include<vector>
#include<map>
#include<set>

using namespace std;

int main(){
   
   system("pause");
   return 0;
}

/**
 * Definition for a binary tree node. */
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};