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

int getMax(Node *root)
{
  if (root == NULL)
    return INT_MIN;
  return max(root->data, max(getMax(root->left), getMax(root->left)));
}

int main()
{
  Node *root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->left->left = new Node(400);
  root->left->right = new Node(50);
  root->right->left = new Node(60);
  root->right->right = new Node(700);
  cout << getMax(root);
  return 0;
}

