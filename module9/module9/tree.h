#pragma once

#include <iostream>

    class Tree {
    private:
        std::string name;
        int id;
        static int treeCount;

    public:
        // Konstructor
        Tree(const std::string& treeName) : name(treeName), id(++treeCount) {}

        // Copy konstructor
        Tree(const Tree& other) : name(other.name), id(++treeCount) {}

        // method wind()
        void wind() const {
            std::cout << "Tree: " << name << ", ID: " << id << std::endl;
        }

        // Konst getter
        int getID() const { return id; }
        std::string getName() const { return name; }

        // Static count for trees
        static int getTreeCount() { return treeCount; }
    };

