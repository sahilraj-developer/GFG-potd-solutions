class Solution {
  public:
   bool anscestor(struct Node *root,int target,vector<int> &ans){
        //base case
        if(root == NULL){
            return false;
        }
        if(root-> data== target){
            return true;
        }
        //recursive case
        if(anscestor(root->left , target, ans) || anscestor(root->right , target, ans)){
            ans.push_back(root->data);
            return true;
        }
        return false;
    }
    vector<int> Ancestors(struct Node *root, int target) {
        // CodeGenius
        vector<int> ans;
        anscestor(root,target,ans);
        return ans;
    }
};