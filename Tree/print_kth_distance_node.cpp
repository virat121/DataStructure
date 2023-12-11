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

void print_kt(Node *root, int k)
{
  if (root == NULL)
    return;
  if (k == 0)
    cout << root->data<<" ";
  else
  {
    print_kt(root->left, k - 1);
    print_kt(root->right, k - 1);
  }
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
  root->right->right->left = new Node(80);
  int k;
  cout << "Enter the value of K: ";
  cin >> k;
  print_kt(root, k);
  return 0;
}
