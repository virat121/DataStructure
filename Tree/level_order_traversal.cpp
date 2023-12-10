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

void level_order(Node *root)
{
  if (root == NULL)
    return;
  queue<Node *> q;
  q.push(root);

  while (!q.empty())
  {
    int q_size = q.size();

    for (int i = 0; i < q_size; i++)
    {
      Node *node = q.front();
      cout << node->data << " ";
      q.pop();

      if (node->left != NULL)
        q.push(node->left);
      if (node->right != NULL)
        q.push(node->right);
    }

    cout << endl;
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
  level_order(root);
  return 0;
}
