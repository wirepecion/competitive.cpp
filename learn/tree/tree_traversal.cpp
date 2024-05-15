#include<bits/stdc++.h>
using namespace std;
//
struct Node
{
    // data of node
    int data;
    // pointer to child node
    struct Node* left,*right;
    // for new node
    Node(int data)
    {
        // set data of node
        this->data=data;
        // set left and right child pointers to null
        left=right=NULL;
    }

};
//
// function prototype
void Levelorder(struct Node* node);
void Inorder(struct Node* node);
void Preorder(struct Node* node);
void Postorder(struct Node* node);
//
void Levelorder(struct Node *root)
{
   // Base case (root == NULL)
   if (root == NULL)
       return; //return

   // create queue
   queue<struct Node*> q;
   // push root
   q.push(root);
   // loop until queue is empty
   while (! q.empty())
   {
       // node = first in q
       struct Node *node = q.front();
       // print node->data
       cout<<node->data<<", ";
       // push node's left child to queue if node->left is not null
       if (node->left != NULL)
           q.push(node->left);
       // push node's right child to queue if node->right is not null
       if (node->right != NULL)
           q.push(node->right);
       // pop node from q
       q.pop();
   }
}
//
void Inorder(struct Node* node)
{
   // Base Case (root == NULL)
   if (node==NULL)
       return; // return

   // go to left subtree
   Inorder(node->left);
   // print root (node->data)
   cout<<node->data<<", ";
   // go to right subtreev
   Inorder(node->right);
}
//
void Preorder(struct Node* node)
{
   // Base Case
   if (node==NULL)
       return;

   // print root
   cout<<node->data<<", ";
   // go to left subtree
   Preorder(node->left);
   // go to right subtree
   Preorder(node->right);
}
//
void Postorder(struct Node* node)
{
   // Base Case
   if (node==NULL)
       return;

   // go to left subtree
   Postorder(node->left);
   // go to right subtree
   Postorder(node->right);
   // print root
   cout<<node->data<<",  ";
}

int main()
{

    /*
    root -->       1
               /       \
              2         3
            /  \
           4    5
    */

    // Problem 1. complete code line 4-19 to make printing nodes below work
    struct Node *root = new Node(1);
    root->left        = new Node(2);
    root->right       = new Node(3);
    root->left->left  = new Node(4);
    root->left->right = new Node(5);


    printf("Root data   = %d", root->data);
    printf("\nleft child  = %d", root->left->data);
    printf("\nright child = %d", root->right->data);
    printf("\nleft left child  = %d", root->left->left->data);
    printf("\nleft right child = %d", root->left->right->data);


   // complete code line 27-53 to make Levelorder traversal work
   cout << "\nLevel Order Traversal of Binary Tree is \n";
   Levelorder(root);
//
   // complete code line 55-67 to make Inorder traversal work
   cout << "\nInorder Traversal of Binary Tree is \n";
   Inorder(root);
//
   // complete code line 69-81 to make Preorder traversal work
   cout << "\nPreorder Traversal of Binary Tree is \n";
   Preorder(root);
//
   // complete code line 83-95 to make Postorder traversal work
   cout << "\nPostorder Traversal of Binary Tree is \n";
   Postorder(root);

	return 0;
}
