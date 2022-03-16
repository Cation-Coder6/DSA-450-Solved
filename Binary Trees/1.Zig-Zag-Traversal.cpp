vector<int> zigZagTraversal(Node *root)
{
    vector<int> v;

    if (!root)
        return v;

    stack<Node *> s1;
    stack<Node *> s2;
    bool leftRight = true;
    s1.push(root);

    while (!s1.empty())
    {
        Node *temp = s1.top();
        s1.pop();
        if (temp != nullptr)
        {
            v.push_back(temp->data);
            if (leftRight)
            {
                if (temp->left)
                    s2.push(temp->left);
                if (temp->right)
                    s2.push(temp->right);
            }
            else if (!leftRight)
            {
                if (temp->right)
                    s2.push(temp->right);
                if (temp->left)
                    s2.push(temp->left);
            }
            if (s1.empty())
            {
                swap(s2, s1);
                leftRight = !leftRight;
            }
        }
    }
}