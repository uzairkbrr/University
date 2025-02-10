// Title: Recursive Leaf Node Finder near Root in Binary Tree
// Description: This code defines a recursive helper function to find the leaf node nearest to the root in a binary tree.

// Node structure for the binary tree
struct node {
    int data;
    node *left;
    node *right;
};

// Global variables to store information about the first leaf node found and its level
int firstLeafLevel = -1;
node *previousLeaf = nullptr;
node *rootPtr; // Assuming rootPtr is a global variable representing the root of the binary tree

// Recursive helper function to find a leaf node near the root
node *findLeafNearRootHelper(node *temp, int level) {
    // Base case: If the current node is NULL, return nullptr
    if (temp == NULL) {
        return nullptr;
    }

    // Check if the current node is a leaf node
    if (temp->left == NULL && temp->right == NULL) {
        // Special case: If the leaf node is the root itself
        if (temp == rootPtr) {
            cout << "\nThere exists a single node, and it's the root node itself!" << endl;
            return nullptr;
        }

        // Update information if this is the first leaf node found
        if (firstLeafLevel == -1) {
            firstLeafLevel = level;
            previousLeaf = temp;
        } else if (level < firstLeafLevel) {
            // Update previousLeaf if a leaf node at a lower level is found
            previousLeaf = temp;
            return previousLeaf;
        } else {
            // Return the previously found leaf node if at the same or higher level
            return previousLeaf;
        }
    }

    // Recursively search the left subtree
    if (temp->left != nullptr) {
        previousLeaf = findLeafNearRootHelper(temp->left, level + 1);
    }

    // Recursively search the right subtree
    if (temp->right != nullptr) {
        node *rightLeaf = findLeafNearRootHelper(temp->right, level + 1);

        // Update information if a leaf node is found in the right subtree at a lower level
        if (rightLeaf != nullptr && level < firstLeafLevel) {
            previousLeaf = rightLeaf;
            firstLeafLevel = level;
        }
    }

    // Return the leaf node found so far
    return previousLeaf;
}
