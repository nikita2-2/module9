#include <iostream>
#include <vector>
#include "Forestt.h"

// initializing a static member treeCount
int Tree::treeCount = 0;
int main() {
    // Creating trees
    Tree oak("Dyb");
    Tree birch("Brz");
    Tree pine("Ssn");

    // Creating Forests
    Forest forest1;
    forest1.growUp(oak);
    forest1.growUp(birch);

    Forest forest2;
    forest2.growUp(pine);

    // Info about Frorests
    std::cout << "Forest 1:" << std::endl;
    forest1.wind();

    std::cout << "Forest 2" << std::endl;
    forest2.wind();

    // Union Forests
    Forest mergedForest = forest1 + forest2;
    std::cout << "United Forest:" << std::endl;
    mergedForest.wind();

    // Cut Forest
    mergedForest.cutAll();
    std::cout << "Cut Forest:" << std::endl;
    mergedForest.wind(); // Cutting Forest
    std::cin.get();
    return 0;
}