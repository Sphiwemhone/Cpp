#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int size = 5;

    // 1. Create list
    char **list = new char*[size];

    const char* words[5] = {"alpha", "bravo", "charlie", "delta", "echo"};

    for (int i = 0; i < size; i++) {
        list[i] = new char[strlen(words[i]) + 1];
        strcpy(list[i], words[i]);
    }

    cout << "Initial List:\n";
    for (int i = 0; i < size; i++) {
        cout << list[i] << endl;
    }

    cout << endl;

    // 2. Search for "delta"
    const char* target = "delta";
    for (int i = 0; i < size; i++) {
        if (strcmp(list[i], target) == 0) {
            cout << "Found 'delta' at index " << i << endl;
        }
    }

    cout << endl;

    // 3. Modify index 1 ("bravo" → "blueberry")
    delete[] list[1]; // free old memory

    const char* newWord = "blueberry";
    list[1] = new char[strlen(newWord) + 1];
    strcpy(list[1], newWord);

    cout << "After Modification:\n";
    for (int i = 0; i < size; i++) {
        cout << list[i] << endl;
    }

    cout << endl;

    // 4. Delete "charlie"
    int deleteIndex = -1;

    for (int i = 0; i < size; i++) {
        if (strcmp(list[i], "charlie") == 0) {
            deleteIndex = i;
            break;
        }
    }

    if (deleteIndex != -1) {
        delete[] list[deleteIndex];

        // shift left
        for (int i = deleteIndex; i < size - 1; i++) {
            list[i] = list[i + 1];
        }

        size--; // reduce size
    }

    cout << "After Deletion:\n";
    for (int i = 0; i < size; i++) {
        cout << list[i] << endl;
    }

    cout << endl;

    // Free all memory
    for (int i = 0; i < size; i++) {
        delete[] list[i];
    }
    delete[] list;

    return 0;
}