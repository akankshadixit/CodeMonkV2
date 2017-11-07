/*
BINARY TREE

A binary tree is a structure comprising nodes, where each node has the following 3 components:

Data element: Stores any kind of data in the node
Left pointer: Points to the tree on the left side of node
Right pointer: Points to the tree on the right side of the node
As the name suggests, the data element stores any kind of data in the node.
The left and right pointers point to binary trees on the left and right side of the node respectively.

If a tree is empty, it is represented by a null pointer.

In this example the diameter of the tree is calculated.

Diameter of a tree is (sometimes called the width) is the number of nodes on the longest path between
two leaves in the tree. The diagram below shows two trees each with diameter nine, the leaves that form
the ends of a longest path are shaded

*/


#include <iostream>
using namespace std;


struct node{

    int data;
    struct node* left;
    struct node* right;
};

struct node* newnode(int element)
{
    struct node *temp = (node*) malloc(sizeof(node));
    temp->data = element;
    temp->left = temp->right = NULL;
    return temp;
}

void assign(char *dir, int element, node* root)
{
    int i = 0;
    if(root == NULL) return;

    node* temp = root;
    while(dir[i]!='\0'&&temp)
    {
        if(dir[i] == 'L')
        {
            if(temp->left == NULL)
            temp->left= newnode(element);
            temp = temp->left;
        }

        if(dir[i] == 'R')
        {
            if(temp->right == NULL)
            temp->right = newnode(element);
            temp = temp->right;
        }

        i++;
    }

}

int height(node *root)
{
if(root==NULL)
return 0;

int lh=height(root->left);
int rh=height(root->right);
return max(lh,rh)+1;
}

int diameter(node *root)
{
if(root==NULL)return 0;
int lh=height(root->left);
int rh=height(root->right);

int ld = diameter(root->left);
int rd = diameter(root->right);

return max(lh+rh+1,max(ld,rd));
}

int main()
{
    int n,rootd;
    cin>>n>>rootd;
    char dir[1000];
    int data;

    struct node* root = newnode(rootd);
    for(int i =0;i<n;i++)
    {
        cin>>dir;
        cin>>data;
        assign(dir,data,root);
    }

    cout<<diameter(root);

    return 0;
}
