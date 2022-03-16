int minValue(Node *root)
{
    if (!root)
        return -1;
    else if (!root->left)
        return root->data;
    else
        minValue(root->left);
}
