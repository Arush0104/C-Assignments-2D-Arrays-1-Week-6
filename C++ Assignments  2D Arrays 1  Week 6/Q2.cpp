#include <iostream>

using namespace std;

int main() {
  int matrix_1[][10] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int matrix_2[][10] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
  int result_matrix[][10] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

  int rows = 3;
  int columns = 3;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      result_matrix[i][j] = matrix_1[i][j] + matrix_2[i][j];
    }
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cout << result_matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}