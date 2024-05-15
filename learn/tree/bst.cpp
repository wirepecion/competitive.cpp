#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }

};

// function protopype
Node* search_bst_node(struct Node* root, int key);
Node* insert_bst_node(struct Node* root, int key);
Node* delete_bst_node(struct Node* root, int key);

void Inorder(struct Node* node)
{
    // Base Case (root == NULL)
    if (node == NULL)
        return;

    // go to left subtree
    Inorder(node->left);

    // print root
    cout << node->data << ", ";

    // go to right subtree
    Inorder(node->right);
}

Node* search_bst_node(struct Node* root, int key)
{
    // base case: root is null or key
    if (root->data == key || root == NULL)
        return root;

    // key is greater the root's data
    if (key > root->data)
        return search_bst_node(root->right,key);

    // key is smaller the root's data
    if (key < root->data)
        return search_bst_node(root->left,key);

}

Node* insert_bst_node(struct Node* root, int key)
{
    // Base case (root == NULL)
    if (root == NULL)
        return new Node(key);

    // Recursive call for ancestors of node to be inserted
    // if key > root->data
    if (key > root->data)
        root->right = insert_bst_node(root->right,key);
    // if key < root->data
    else if (key < root->data)
        root->left = insert_bst_node(root->left,key);

    return root;
}

Node* delete_bst_node(struct Node* root, int key)
{
    // Base case (root == NULL)
    if (root == NULL)
        return root;

    // Recursive call for ancestors of node to be deleted
    // key > root->data
    if (key > root->data)
    {
        root->right = delete_bst_node(root->right,key);
        return root;
    }
    else if (key < root->data)
    {
        root->left = delete_bst_node(root->left,key);
        return root;
    }

    // We reach the root is the node to be deleted
    // if left child is empty
    if (root->left == NULL)
    {
        // track right child
        Node * right_child = root->right;
        // delete root
        delete root;
        // return right child as a root
        return right_child;
    }
    else if (root->right == NULL) // left child is empty but not right child
    {
        // track left child
        Node *left_child = root->left;
        // delete root
        delete root;
        // return left child as a root
        return left_child;
    }
    else // both child are not empty
    {
        // create a pointer to track successor's parent
        Node* successor_parrent = root;
        // create a pointer for successor
        // note that successor is a smallest value on the right subtree
        Node* successor = root->right;
        // find a successor
        while (successor->left != NULL) // there is a smaller number on this branch
        {
            // go down one step
            // successor become parent
            successor_parrent = successor;
            // succesor's left child (smaller number) becomes successor
            successor = successor->left;
        }

        // now we know the successor and it's parent
        // successor always has one child because left child of successor is always NULL
        // we can make successor right child be the child of successor's parent
        if (successor_parrent != root)
            // if succParent is not a root
            // we can make succ->right be the left child of succParent
            successor_parrent->left = successor->right;
        else
            // if root is a succParent
            // we have to make succ->right be the right child of root (minimum value of root's right subtree)
            successor_parrent->right = successor->right;

        // copy successor data to root
        root->data = successor->data;

        // delete successor
        delete successor;
        // return root
        return root;
    }
}

int main()
{
//               8
//            /     \
//           /       \
//          /         \
//         3           10
//       /   \           \
//      1     6          14
//           / \         /
//          4   7       13

    struct Node* root = new Node(8);
    root->left        = new Node(3);
    root->left->left  = new Node(1);
    root->left->right = new Node(6);
    root->left->right->left = new Node(4);
    root->left->right->right = new Node(7);
    root->right       = new Node(10);
    root->right->right = new Node(14);
    root->right->right->left= new Node(13);

    cout << "\nInorder Traversal of Binary Tree is \n";
    Inorder(root);

   // complete code line 37-51 to enable the search_bst_node function
   int key = 6;
   Node* result_node = search_bst_node(root, key);
   cout << "\n" << result_node->data << " :)";

   // complete code line 53-68 to enable the insert_bst_node function
   int ins_key = 5;
   cout << "\nInorder Traversal of BST before insert is \n";
   Inorder(root);
   insert_bst_node(root, ins_key);
   cout << "\nInorder Traversal of BST after insert is \n";
   Inorder(root);

   // complete code line 70-146 to enable delete_bst_node function
   int del_key = 3;
   cout << "\nInorder Traversal of BST before delete is \n";
   Inorder(root);
   delete_bst_node(root, del_key);
   cout << "\nInorder Traversal of BST after delete is \n";
   Inorder(root);
}
