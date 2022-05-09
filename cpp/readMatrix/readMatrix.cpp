//
// Created by Iluha on 09.05.2022.
//

#include "readMatrix.h"

int** readMatrix(std::ifstream& fin, int& n) {
    int** matrix = nullptr;

    if (!fin) {
        std::cout << "Read matrix from file failed with error: file don't searched..." << std::endl;
    } else {
        fin >> n;

        matrix = new int *[n];

        for (int i = 0; i < n; i++)
            matrix[i] = new int[n];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                fin >> matrix[i][j];
    }

    fin.close();

    return matrix;
}