vector<vector<int>> levelOrder(Node *root) {
        // Your code here
         vector<vector<int>> ans;
            queue<Node*>pq;
            pq.push(root);
            vector<int> init;
            
        init.push_back (root->data);
        ans.push_back(init);
        
        while (!pq.empty()) {
            
                vector <int> temp;
                Node * curr = pq.front();
                pq.pop ();
            
            if (curr->left){
                
                temp.push_back(curr->left->data);
                pq.push(curr->left);
            }
            if(curr->right){
                
                temp.push_back(curr->right->data);
                pq.push(curr->right);
            }
            ans.push_back(temp);
        }
        return ans;
    }
