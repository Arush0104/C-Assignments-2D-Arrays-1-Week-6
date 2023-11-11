#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int n, m;
    int A[100][100];
    int largest_element = INT_MIN;

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
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] > largest_element)
            {
                largest_element = A[i][j];
            }
        }
    }

    cout << "The largest element of the array is: " << largest_element << endl;

    return 0;
}