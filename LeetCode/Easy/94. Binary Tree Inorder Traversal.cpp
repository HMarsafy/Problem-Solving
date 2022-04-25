void fn(vector<int>& ans ,TreeNode* root)
    {
        if(root != nullptr)
        {
            fn(ans , root -> left);
            ans.push_back(root -> val);
            fn(ans, root -> right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> ans;
        fn(ans,root);
        return ans;
    
        
    }
