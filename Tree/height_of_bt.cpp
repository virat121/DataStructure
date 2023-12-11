#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int data)
  {
    this->data = data;
    left = right = NULL;
  }
};

int height(Node *root)
{
  if (root == NULL)
    return 0;
  return max(height(root->left), height(root->right)) + 1;
}

int main()
{
  Node *root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->left->left = new Node(40);
  root->left->right = new Node(50);
  root->right->left = new Node(60);
  root->right->right = new Node(70);
  root->right->right->left= new Node(80);
  root->right->right->left->right= new Node(90);
  cout << height(root) << endl;
  return 0;
}
