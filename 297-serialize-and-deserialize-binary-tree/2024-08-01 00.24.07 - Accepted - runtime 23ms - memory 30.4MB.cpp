/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "";
        string s ="";
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            auto curnode = q.front();
            q.pop();
            if(curnode == nullptr){
                s +="null,";
            }else{
                s+= to_string(curnode->val)+",";
                q.push(curnode->left);
                q.push(curnode->right);
            }
        }
        return s ;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.empty()) return nullptr ;
        stringstream s(data);
        string str ;
        getline(s,str,',');
        TreeNode* root = new TreeNode(stoi(str));
          queue<TreeNode*>q;
          q.push(root);
          while(!q.empty()){
            auto it = q.front();
            q.pop();
            getline(s,str,',');
            if(str =="null")
             it->left = nullptr; 
            else{
                TreeNode* leftNode = new TreeNode(stoi(str));
                it->left = leftNode;
                q.push(leftNode);
            }
            getline(s, str, ',');
            if(str =="null")
            it->right = nullptr ;
           else{
                 TreeNode* rightnode = new TreeNode(stoi(str));
                it->right = rightnode;
                q.push(rightnode);
            }
          }
          return root ;
    } 
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));