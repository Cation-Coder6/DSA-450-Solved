bool search(Node *root, int x)
{
    if (root == nullptr)
        return false;
    else if (root->data == x)
        return true;
    if (root->data > x)
        search(root->left, x);
    else
        search(root->right, x);
}