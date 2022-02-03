    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        int dep= 0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        while(!q.empty())
        {
              TreeNode * temp = q.front();
              q.pop();
            if(temp == nullptr)
            {
                dep++;
            }
            if(temp !=nullptr)
            {
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
        return dep;
    }
