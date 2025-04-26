void sudokuSolver(int a[9][9]) {
    sudoku(a, 0, 0, 9);
}
void sudoku(int a[9][9], int i, int j, int n) {
    if (i == n) {
        print(a);
        return;
    }
    if (j == n) {
        sudoku(a, i + 1, 0, n);
        return;
    }
    if (a[i][j] != 0) {
        sudoku(a, i, j + 1, n);
        return;
    }
    for (int k = 1; k <= n; k++) {
        a[i][j] = k;
        sudoku(a, i, j + 1, n);
        a[i][j] = 0;
    }
}