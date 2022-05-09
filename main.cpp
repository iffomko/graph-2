#include <iostream>
#include <fstream>

#include "cpp/readMatrix/readMatrix.h"
#include "cpp/findIsolatedTops/findIsolatedTops.h"

int main() {
    std::ifstream fin("C:\\Users\\Iluha\\Documents\\github_repos\\graph-2\\input.txt");

    int n, count;
    int** matrix = readMatrix(fin, n);
    std::string result;

    if (matrix != nullptr)
        findIsolatedTops(count, result, matrix, n);
    else
        return 1;

    if (count == 0)
        std::cout << "Graph don't have a isolated tops..." << std::endl;
    else {
        std::cout << "Count of isolated tops: " << count << ", numbers: " << result << std::endl;
    }

    return 0;
}
