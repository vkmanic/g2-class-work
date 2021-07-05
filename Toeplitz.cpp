#include <iostream>
using namespace std;

// `M × N` matrix
#define M 4
#define N 5

// Function to determine if a given matrix is a Toeplitz or not
bool checkToeplitz(int matrix[M][N])
{
    for (int i = 0; i < M - 1; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            // return false if any diagonal elements have different values
            if (matrix[i][j] != matrix[i + 1][j + 1]) {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int matrix[M][N] =
    {
        { 3, 7, 0, 9, 8 },
        { 5, 3, 7, 0, 9 },
        { 6, 5, 3, 7, 0 },
        { 4, 6, 5, 3, 7 }
    };

    if (checkToeplitz(matrix)) {
        cout << "Toeplitz matrix.";
    }
    else {
        cout << "Not a Toeplitz matrix.";
    }

    return 0;
}
