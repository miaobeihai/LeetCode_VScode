
/*Share
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree [1,2,2,3,4,4,3] is symmetric:

    1
   / \
  2   2
 / \ / \
3  4 4  3
But the following [1,2,2,null,3,null,3] is not:
    1
   / \
  2   2
   \   \
   3    3
Note:
Bonus points if you could solve it both recursively and iteratively.*/



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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
           return issy(root->left,root->right);
    
    }
    bool issy(TreeNode *l,TreeNode* r){
      if(l==NULL&&r==NULL) return true;
      if(!l||!r||l->val!=r->val) return false;
      return issy(l->left,r->right)&&(l->right,r->left);
    }
}; 