#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int A[100][100];
    int l1, r1, l2, r2;
    int sum = 0;

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

    cout << "Enter the coordinates (l1, r1) and (l2, r2) of the rectangle:";
    cin >> l1 >> r1 >> l2 >> r2;

    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += A[i][j];
        }
    }

    cout << "The sum of the rectangle is: " << sum << endl;

    return 0;
}