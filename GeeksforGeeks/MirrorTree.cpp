
//    https://www.geeksforgeeks.org/write-an-efficient-c-function-to-convert-a-tree-into-its-mirror-tree/


// Print Inorder traversal of Mirrored Tree

void mirror(Node* node) 
{
     // Your Code Here
     if(node == NULL)
        return;
    else
    {
        struct Node* temp;
        mirror(node->left);
        mirror(node->right);
        
        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}
