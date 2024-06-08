#include <iostream>
#include <vector>

using namespace std;

class BST {
private:
    struct Node {
        int data;
        Node* left;
        Node* right;
    };

    Node* root = nullptr;

    Node* add(Node* node, int value) {
        if (node == nullptr) {
            node = new Node;
            node->data = value;
            node->left = nullptr;
            node->right = nullptr;
            return node;
        }

        if (value <= node->data) {
            node->left = add(node->left, value);
        }
        else {
            node->right = add(node->right, value);
        }
        return node;
    }

    Node* sortedArrayToBST(const vector<int>& arr, int start, int end) {
        if (start > end) {
            return nullptr;
        }

        int mid = start + (end - start) / 2;
        Node* node = new Node;
        node->data = arr[mid];
        node->left = sortedArrayToBST(arr, start, mid - 1);
        node->right = sortedArrayToBST(arr, mid + 1, end);

        return node;
    }

    void inOrder(Node* node) {
        if (node == nullptr) {
            return;
        }
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }

public:
    void add(int value) {
        root = add(root, value);
    }

    void sortedArrayToBST(const vector<int>& arr) {
        root = sortedArrayToBST(arr, 0, arr.size() - 1);
    }

    void inOrder() {
        inOrder(root);
        cout << endl;
    }
};

int main() {
    vector<int> sortedArray = { 1, 2, 3, 4, 5, 6, 7 };

    BST bst;
    bst.sortedArrayToBST(sortedArray);

    cout << "In-order traversal of the BST: ";
    bst.inOrder();

    return 0;
}
