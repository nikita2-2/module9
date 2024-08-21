#include <iostream>
#include <vector>
#include "tree.h"
class Forest {
private:
    std::vector<Tree> trees;

public:
    // Method growUp
    void growUp(const Tree& newTree) {
        trees.push_back(newTree);
    }

    // Method cutAll
    void cutAll() {
        trees.clear();
    }

    // Method wind
    void wind() const {
        for (const auto& tree : trees) {
            tree.wind();
        }
    }

    // Operator + for union forests
    Forest operator+(const Forest& other) const {
        Forest newForest;
        for (const auto& tree : trees) {
            newForest.growUp(tree);
        }
        for (const auto& tree : other.trees) {
            newForest.growUp(tree);
        }
        return newForest;
    }
};