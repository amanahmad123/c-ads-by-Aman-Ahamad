
#include <iostream>
using namespace std;

template<typename type>
class Tree {
    struct Node {
        type data;
        Node *left;
        Node *right;

        Node(type d) {
            data = d;
            left = right = nullptr;
        }
    };

public:
    Node *Root = nullptr;

    Tree() {
        Node *f = new Node('F');
        Node *b = new Node('B');
        Node *g = new Node('G');
        Node *a = new Node('A');
        Node *d = new Node('D');
        Node *i = new Node('I');
        Node *c = new Node('C');
        Node *e = new Node('E');
        Node *h = new Node('H');

        f->left = b;
        f->right = g;
        b->left = a;
        b->right = d;
        d->left = c;
        d->right = e;
        g->right = i;
        i->left = h;

        Root = f;
    }

    int countLeafNodes(Node *ptr) {
        if (ptr == nullptr) {
            return 0;
        }

        if (ptr->left == nullptr && ptr->right == nullptr) {
            return 1;
        }

        return countLeafNodes(ptr->left) + countLeafNodes(ptr->right);
    }
};

int main() {
    Tree<char> t;

    cout << "Total Leaf Nodes: " << t.countLeafNodes(t.Root);

    return 0;
}
