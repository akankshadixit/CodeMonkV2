/*
BINARY SEARCH TREE

For a binary tree to be a binary search tree, the data of all the nodes in the left sub-tree of the
root node should be ≤ the data of the root. The data of all the nodes in the right subtree of the root
 node should be > the data of the root.

 Traversing the tree

There are mainly three types of tree traversals.
1. PreOrder  : root-L-R
2. PostOrder : L-R-root
3. InOrder   : L-root-R

The in-order traversal of a BST gives a sorted ordering of the data elements that are present
in the BST. This is an important property of a BST.
*/


#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *left, *right;
};


struct node* makenode(int element)
{
    struct node *temp = (node*) malloc(sizeof(node));
    temp->data = element;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* root, int data)
{
    if(root == NULL)
    return makenode(data);

    else if(data <= root->data)
    {
        root->left = insert(root->left,data);
    }
    else
    {
        root->right = insert(root->right,data);
    }

    return root;

}

struct node* search(struct node* root, int q)
{
    if(root->data==q)
    return root;

    else if(q<=root->data)
    {
     return search(root->left,q);
    }
    else
    {
     return search(root->right,q);

    }
}

void preOrder(struct node *root)
{
if(root)
{
cout << root->data << endl;
preOrder(root->left);
preOrder(root->right);
}
}



int main()
{
    node* root = NULL;
    int n, q;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
    cin >> a[i];
    root = insert(root,a[i]);
}
    cin >> q;
    struct node *temp = search(root,q);
    preOrder(temp);

    return 0;
}
