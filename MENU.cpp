#include <iostream>
using namespace std;

#define MAX_SIZE 100

int arr[MAX_SIZE];
int arrSize = 0;

void create() {
    cout << "Enter the number of elements: ";
    cin >> arrSize;

    if (arrSize > MAX_SIZE || arrSize <= 0) {
        cout << "Invalid size. Please enter a size between 1 and " << MAX_SIZE << ".\n";
        arrSize = 0;
        return;
    }

    cout << "Enter the elements:\n";
    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }
    cout << "Array created successfully.\n";
}

void display() {
    if (arrSize == 0) {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insert() {
    int element, position;

    if (arrSize == MAX_SIZE) {
        cout << "Array is full. Cannot insert.\n";
        return;
    }

    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert (0 to " << arrSize << "): ";
    cin >> position;

    if (position < 0 || position > arrSize) {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = arrSize; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    arrSize++;
    cout << "Element inserted successfully.\n";
}

void delete_element() {
    int position;

    if (arrSize == 0) {
        cout << "Array is empty. Cannot delete.\n";
        return;
    }

    cout << "Enter the position to delete (0 to " << arrSize - 1 << "): ";
    cin >> position;

    if (position < 0 || position >= arrSize) {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = position; i < arrSize - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arrSize--;
    cout << "Element deleted successfully.\n";
}

int linear_search() {
    if (arrSize == 0) {
        cout << "Array is empty. Cannot search.\n";
        return -1;
    }

    int element;
    cout << "Enter the element to search: ";
    cin >> element;

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int choice;

    do {
        cout << "\n——MENU——\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                delete_element();
                break;
            case 5: {
                int result = linear_search();
                if (result != -1) {
                    cout << "Element found at position: " << result << "\n";
                } else {
                    cout << "Element not found.\n";
                }
                break;
            }
            case 6:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
