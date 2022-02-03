 vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        vector<vector<int>> out;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        vector<int> level;
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();
            if(temp == nullptr)
            {
                out.push_back(level);
                level.clear();
            }
            if(temp != nullptr)
            {
                level.push_back(temp->val);
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            else if(!q.empty())
            {
                q.push(nullptr);
            }
            
        }
        return out;
    }
