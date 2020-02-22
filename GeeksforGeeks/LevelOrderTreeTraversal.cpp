void levelOrder(Node* node)
{
  //Your code here
    if(node == NULL)    
        return;
    queue<Node*> q;
    q.push(node);
    while(q.empty() == false)
    {
        Node* node = q.front();
        cout<<node->data<<" ";
        q.pop();
        if(node->left!=NULL)
            q.push(node->left);
        if(node->right!=NULL)
            q.push(node->right);
    }
}
