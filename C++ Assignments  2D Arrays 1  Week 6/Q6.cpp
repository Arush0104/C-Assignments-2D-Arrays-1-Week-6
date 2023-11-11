
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int arr[100][100];

    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Enter the number of columns: ";
    cin >> m;

    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int middle_row_index = n / 2;
    int middle_column_index = m / 2;

    cout << "The elements of the middle row are: " << endl;
    for (int j = 0; j < m; j++)
    {
        cout << arr[middle_row_index][j] << " ";
    }
    cout << endl;

    cout << "The elements of the middle column are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i][middle_column_index] << " ";
    }
    cout << endl;

    return 0;
}