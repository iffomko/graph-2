#include <iostream>
#include <fstream>

int main() {
    std::ifstream fin("C:\\Users\\Iluha\\Documents\\github_repos\\graph-2\\input.txt");

    int n, count = 0;
    int** matrix;
    std::string result = "";

    

    if (count == 0)
        std::cout << "Graph don't have a isolated tops..." << std::endl;
    else {
        std::cout << "Count of isolated tops: " << count << ", numbers of " << result << std::endl;
    }

    return 0;
}
