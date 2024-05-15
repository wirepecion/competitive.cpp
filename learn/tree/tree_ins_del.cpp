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

// function prototype
void printInorder(struct Node* root);
Node* insertion(struct Node* root, int key);
Node* deletion(struct Node* root, int key);

void printInorder(struct Node* root)
{
    //base case
    if (root==NULL)
        return;

    //go to left child
    printInorder(root->left);

    //print root
    cout << root->data << " ";

    // go to the right
    printInorder(root->right);
}

Node* insertion(struct Node* root, int key)
{
    //base case (root == NULL)
    if (root==NULL)
        // create a new node with key
        return new Node(key);

    // Level order traversal using queue
    // create queue
    queue<struct Node*> q;
    // push root
    q.push(root);

    // while q is not empty
    while (!q.empty())
    {
        // node = first of q
        struct Node *node =q.front();
        // if left child is available
        if(node->left==NULL)
        {
            // insert to left child
            node->left = new Node(key);
            // then break
            break;
        }
        else // left child is not available
            // push left child to the queue
            q.push(node->left);

        // if right child is available
        if(node->right==NULL)
        {
            // insert to right child
            node->right = new Node(key);
            // then break
            break;
        }
        else // if right child is not available
            // push right child to the queue
            q.push(node->right);
        // pop node from q
        q.pop();
    }
    return root; //return root
}

Node* deletion(struct Node* root, int key)
{
    // Base Case - empty tree
    if (root==NULL)
        return NULL; // return null

    // Base Case - has only one node
    if (root->left==NULL && root->right==NULL)
    {
        // if root is del_key
        if (root->data==key)
            // return NULL
            return NULL;
        // cannot find del key
        else
            // return root
            return root;
    }

    // create pointer to track present node
    struct Node *node;
    // create pointer to track del_key
    struct Node *key_node=NULL;
    // create pointer to track parent of deepest-rightmost node
    struct Node *deepest_parent;
    // create queue
    queue<struct Node*> q;
    // push root
    q.push(root);

    // while q is not empty
    while (!q.empty())
    {
        // node = first of q
        node = q.front();
        // if check key with data
        if (node->data == key)
            key_node = node;
        // if node has a left child
        if (node->left != NULL)
        {
            // track this node as a parent of the deepest node
            deepest_parent = node;
            // put left child to q
            q.push(node->left);
        }
        // if node has a right child
        if (node->right)
        {
            // track this node as a parent of the deepest node
            deepest_parent = node;
            // put right child to q
            q.push(node->right);
        }
        // pop node from q
        q.pop();
    }

    // if there is a key node in the tree
    if (key_node != NULL)
    {
        // store data of last node
        key_node->data = node->data; // node is the deepest rightmost node
        // delete last node
        // if the deepest node is on the right of the parent
        if (deepest_parent->right == node)
            // delete the right child from the parent node
            deepest_parent->right = NULL;
        else // the deepest node is on the left of the parent
            // delete the left child from the parent node
            deepest_parent->left = NULL;
        // delete the deepest node
        delete(node);
    }
    return root; // return root
}

int main()
{

    struct Node* root = new Node(10);
    root->left        = new Node(11);
    root->left->left  = new Node(7);
    root->right       = new Node(9);
    root->right->left = new Node(15);
    root->right->right= new Node(8);

    cout << "\nInOrder Traversal of Binary Tree before insert is \n";
    printInorder(root);

   // complete code line 36-81 to enable the insertion function
   int ins_key = 12;
   root = insertion(root, ins_key);
   cout << "\nInOrder Traversal of Binary Tree after insert is \n";
   printInorder(root);

   cout << "\nInOrder Traversal of Binary Tree before deletion is \n";
   printInorder(root);

   // complete code line 83-158 to enable the deletion function
   int del_key = 11;
   root = deletion(root, del_key);
   cout << "\nInOrder Traversal of Binary Tree after deletion is \n";
	printInorder(root);
	return 0;
}
