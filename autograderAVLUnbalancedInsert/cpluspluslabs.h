#include <string>

using namespace std;

class Node 
{ 
  public:
    int key; 
    Node *left; 
    Node *right; 
    int height; 
}; 

Node* new_node(int key); 
Node* insertnb(Node* node, int key);



