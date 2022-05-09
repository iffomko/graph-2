//
// Created by Iluha on 09.05.2022.
//

#include "findIsolatedTops.h"

void findIsolatedTops(int &count, std::string &result, int **matrix, const int &n) {
    count = 0;

    if (matrix != nullptr) {
        for (int i = 0; i < n; i++) {
            bool isolated = true;

            for (int j = 0; j < n; j++)
                if (i != j && matrix[i][j] == 1) {
                    isolated = false;
                    break;
                }

            if (isolated) {
                count++;
                result += std::to_string(i + 1) + " ";
            }
        }
    } else {
        std::cout << "ERROR: matrix don't exist...\n";
    }
}
