    void inorder(TreeNode* root , vector<int>& out)
    {
        if(root == nullptr) return ;
        inorder(root->left,out);
        out.push_back(root->val);
        inorder(root->right,out);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> out;
        inorder(root,out);
        for(int i = 0 ; i<out.size()-1 ; i++)
        {
            if(out[i] >= out[i+1]) return false;
        }
        
        return true;
        
    }
