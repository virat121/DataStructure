#include <iostream>
#include <queue>
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

void printLeftView(Node *root)
{

  if (root == NULL)
    return;
  queue<Node *> q;
  q.push(root);

  while (q.empty() == false)
  {
    int count = q.size();
    for (int i = 0; i < count; i++)
    {
      Node *curr = q.front();
      q.pop();
      if (i == 0)
        cout << curr->data << " ";
      if (curr->left != NULL)
        q.push(curr->left);
      if (curr->right != NULL)
        q.push(curr->right);
    }
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
  printLeftView(root);
  return 0;
}
