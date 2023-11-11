#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int n, m;
    int A[100][100];
    int max_sum = INT_MIN;
    int max_row = -1;

    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Enter the number of columns: ";
    cin >> m;

    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int row_sum = 0;
        for (int j = 0; j < m; j++)
        {
            row_sum += A[i][j];
        }
        if (row_sum > max_sum)
        {
            max_sum = row_sum;
            max_row = i;
        }
    }

    cout << "The row number having the maximum sum is: " << max_row << endl;

    return 0;
}