#include <iostream>
#include <vector>
#include <string>

using namespace std;

void menu() {
    cout << "\n--- My Tasks ---\n";
    cout << "1. Add New\n";
    cout << "2. Show All\n";
    cout << "3. Remove One\n";
    cout << "4. Quit\n";
    cout << "Pick: ";
}

void insert(vector<string>& list) {
    cout << "New task: ";
    string txt;
    cin.ignore();
    getline(cin, txt);
    list.push_back(txt);
    cout << "Saved!\n";
}

void display(const vector<string>& list) {
    if (list.empty()) {
        cout << "Nothing added.\n";
        return;
    }
    cout << "\nCurrent List:\n";
    for (int i = 0; i < list.size(); ++i)
        cout << i + 1 << ") " << list[i] << "\n";
}

void removeItem(vector<string>& list) {
    if (list.empty()) {
        cout << "Nothing to remove.\n";
        return;
    }

    display(list);
    cout << "Enter number to remove: ";
    int po;
    cin >> po;

    if (po < 1 || po > list.size()) {
        cout << "Invalid number.\n";
    }

    list.erase(list.begin() + po - 1);
    cout << "Deleted!\n";
}

int main() {
    vector<string> mylist;
    int p;

    do {
        menu();
        cin >> p;

        if (p == 1)
            insert(mylist);
        else if (p == 2)
            display(mylist);
        else if (p == 3)
            removeItem(mylist);
        else if (p == 4)
            cout << "Closed.\n";
        else
            cout << "Wrong choice.\n";

    } while (p != 4);

   
}

