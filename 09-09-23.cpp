//Kth Largest Node in BST

void helper(Node *root,int &k,priority_queue<int> &pq){
    if(root == NULL) return;
    helper(root->left,k,pq);
    helper(root->right,k,pq);
    pq.push(root->data);
}
int kthLargest(Node *root, int K)
{
    //Your code here
    priority_queue<int> pq;
    helper(root,K,pq);
    while(K-- > 1) pq.pop();
    return pq.top();
}
