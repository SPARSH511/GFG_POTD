//Insert a Node in BST

bool helper(Node *node,int data){
    if(node == NULL) return false;
    helper(node->left,data);
    if(node->data == data) return true;
    helper(node->right,data);
}
void inserter(Node *node,Node *newnode){
    if(node->left == NULL && node->data > newnode->data) {node->left = newnode; return;}
    else if(node->right == NULL && node->data < newnode->data) {node->right = newnode; return;}
    else{
        if(node->data > newnode->data)
            inserter(node->left,newnode);
        if(node->data < newnode->data)
            inserter(node->right,newnode);
    }
}
Node* insert(Node* node, int data) {
    if(helper(node,data) != true){
        Node *newnode = new Node(data);
        inserter(node,newnode);
    }
    return node;
}
