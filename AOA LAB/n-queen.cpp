   #include <iostream>
using namespace std;

int board[20][20];

bool isSafe(int row, int col, int n)
{
    // Check column
    for (int i = 0; i < row; i++)
        if (board[i][col] == 1)
            return false;

    // Check left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 1)
            return false;

    // Check right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        if (board[i][j] == 1)
            return false;

    return true;
}

bool solve(int row, int n)
{
    if (row == n)
        return true;

    for (int col = 0; col < n; col++)
    {
        if (isSafe(row, col, n))
        {
            board[row][col] = 1;

            if (solve(row + 1, n))
                return true;

            // Backtracking
            board[row][col] = 0;
        }
    }

    return false;
}

int main()
{
    int n;

    cout << "Enter number of queens: ";
    cin >> n;

    if (solve(0, n))
    {
        cout << "\nSolution:\n";

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == 1)
                    cout << "Q ";
                else
                    cout << ". ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "No solution exists.";
    }

    return 0;
}