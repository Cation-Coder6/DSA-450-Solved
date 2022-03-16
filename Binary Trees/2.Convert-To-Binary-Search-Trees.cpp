void solver(Node *root, int &n)
{
    if (root == nullptr)
        return;
    else if (root->left == nullptr && root->right == nullptr)
    {
        n = root->data;
        root->data = 0;
        return;
    }
    else
    {
        int leftData = 0;
        solver(root->left, leftData);
        int rightData = 0;
        solver(root->right, rightData);
        n = root->data + leftData + rightData;
        root->data = leftData + rightData;
        return;
    }
}

void toSumTree(Node *root)
{
    int n = 0;
    solver(root, n);
    return;
}

// this is solution 1👆🏼👆🏼

// alternate solution 👇🏼👇🏼

int solver(Node *root)
{
    if (root == nullptr)
        return 0;
    int l = solver(root->left);
    int r = solver(root->right);

    int x = root->data;
    root->data = l + r;
    return root->data + x;
}

void toSumTree(Node *node)
{
    solver(node);
    return;
}
