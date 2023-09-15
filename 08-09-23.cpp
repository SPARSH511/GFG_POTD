//Binary Tree to BST

// The given root is the root of the Binary Tree
// Return the root of the generated BST
vector<int> v;
//anyone traversal 
void helper1(Node *root){
  if(root == NULL) return;
  helper1(root->left);
  helper1(root->right);
  v.push_back(root->data);
}
//sort array and put back in inorder traversal
void helper2(Node *root,int &k){
  if(root == NULL) return;
  helper2(root->left,k);
  root->data = v[k++];
  helper2(root->right,k);
}    
Node *binaryTreeToBST (Node *root){
  helper1(root);
  sort(v.begin(),v.end());
  int k = 0;
  helper2(root,k);
  return root;
}
