//WAP for max heap tree
#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

// Heapify a subtree rooted at index i for the given array
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;            // Initialize largest as root
    int left = 2 * i + 1;       // Left child
    int right = 2 * i + 2;      // Right child

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);  // Recursively heapify the affected subtree
    }
}

// Build max heap from array
void buildMaxHeap(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

// Create tree from max heap array
Node* createTree(const vector<int>& arr, int i, int n) {
    if (i >= n) return NULL;
    Node* root = new Node(arr[i]);
    root->left = createTree(arr, 2 * i + 1, n);
    root->right = createTree(arr, 2 * i + 2, n);
    return root;
}

void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    vector<int> arr = {12, 15, 25, 23, 16, 24, 48};

    // Step 1: Build max heap
    buildMaxHeap(arr);

    // Step 2: Create tree from max heap array
    Node* root = createTree(arr, 0, arr.size());

    // Step 3: Perform traversals
    cout << "Preorder of Tree: " << endl;
    preorder(root);
    cout << endl;

    cout << "Inorder of Tree: " << endl;
    inorder(root);
    cout << endl;

    cout << "Postorder of Tree: " << endl;
    postorder(root);
    cout << endl;

    return 0;
}
