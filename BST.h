#include <iostream>
#include <string>

// Defines the structure of a record in the Iris dataset.
struct IrisRecord {
    int id; // Unique identifier for the record.
    double sepalLength; // Length of the iris's sepal.
    double sepalWidth;  // Width of the iris's sepal.
    double petalLength; // Length of the iris's petal.
    double petalWidth;  // Width of the iris's petal.
    std::string species; // Species of the iris.
};

// Node structure for the Binary Search Tree (BST).
struct TNode {
    IrisRecord item; // The data item (iris record) the node contains.
    TNode* left;     // Pointer to the left child node.
    TNode* right;    // Pointer to the right child node.
};

// BST class for managing the binary search tree.
class BST {
public:
    BST(); // Constructor to initialize an empty BST.
    ~BST(); // Destructor to clean up and prevent memory leaks.
    void PutItem(IrisRecord newRecord); // Adds a new item (iris record) to the BST.
    void PrintSubset(double threshold); // Prints a subset of iris records exceeding a given sepal length threshold.

private:
    TNode* root; // Pointer to the root node of the BST.

    // Helper functions for internal operations
    void Insert(TNode*& curnode, IrisRecord newRecord); // Recursively inserts a new record into the BST.
    void InOrderPrintSubset(TNode* curnode, double threshold); // Recursively prints records in an in-order traversal that exceed the threshold.
};
