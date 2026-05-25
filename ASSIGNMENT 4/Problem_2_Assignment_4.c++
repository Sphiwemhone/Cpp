#include <iostream>
#include <cstring>
using namespace std;

// Function to print seat map
void print_seat(int **seat, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%02d ", seat[i][j]); // print 2 digits
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int row = 10, col = 10;

    // 1. Allocate 2D array
    int **seat = new int*[row];
    for (int i = 0; i < row; i++) {
        seat[i] = new int[col];
    }

    // Initialize to 0
    for (int i = 0; i < row; i++) {
        memset(seat[i], 0, sizeof(int) * col);
    }

    // Assign values
    seat[0][0] = 11;
    seat[0][3] = 24;
    seat[1][1] = 35;
    seat[2][5] = 47;
    seat[3][3] = 58;
    seat[4][9] = 69;
    seat[5][0] = 70;
    seat[5][5] = 81;
    seat[5][9] = 92;
    seat[6][4] = 13;
    seat[7][7] = 26;
    seat[8][2] = 39;
    seat[9][9] = 44;

    cout << "Original Seat Map:\n";
    print_seat(seat, row, col);

    // 3. Create backup
    int **backup = new int*[row];
    for (int i = 0; i < row; i++) {
        backup[i] = new int[col];
        memcpy(backup[i], seat[i], sizeof(int) * col);
    }

    cout << "Backup Seat Map:\n";
    print_seat(backup, row, col);

    // 4. Clear row 5 in original
    memset(seat[5], 0, sizeof(int) * col);

    cout << "Modified Original (row 5 cleared):\n";
    print_seat(seat, row, col);

    cout << "Backup remains unchanged:\n";
    print_seat(backup, row, col);

    // 5. Find row with most assigned seats
    int maxRow = 0;
    int maxCount = 0;

    for (int i = 0; i < row; i++) {
        int count = 0;
        for (int j = 0; j < col; j++) {
            if (backup[i][j] != 0) count++;
        }

        if (count > maxCount) {
            maxCount = count;
            maxRow = i;
        }
    }

    cout << "Row with most assigned seats: " << maxRow << endl;

    // Free memory
    for (int i = 0; i < row; i++) {
        delete[] seat[i];
        delete[] backup[i];
    }
    delete[] seat;
    delete[] backup;

    return 0;
}