#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
    int bookID;
    string title;
    string author;

    Book(int id, string t, string a) {
        bookID = id;
        title = t;
        author = a;
    }

    void display() {
        cout << "Book ID: " << bookID << "\nTitle: " << title << "\nAuthor: " << author << "\n\n";
    }
};

class Library {
    vector<Book> books;

public:
    void addBook() {
        int id;
        string title, author;

        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Author: ";
        getline(cin, author);

        books.push_back(Book(id, title, author));
        cout << "Book added successfully!\n";
    }

    void displayBooks() {
        if (books.empty()) {
            cout << "No books in the library.\n";
            return;
        }

        cout << "\nAll Books:\n";
         for (int i = 0; i < books.size(); i++ ){
        }
    }

    void searchBook() {
        int id;
        cout << "Enter Book ID to search: ";
        cin >> id;

        for (int i = 0 ; i < books.size(); i++ ) {
		Book &b = books[i];
            if (b.bookID == id) {
                cout << "Book found:\n";
                b.display();
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void deleteBook() {
        int id;
        cout << "Enter Book ID to delete: ";
        cin >> id;

        for (int i = 0; i < books.size(); ++i) {
            if (books[i].bookID == id) {
                books.erase(books.begin() + i);
                cout << "Book deleted successfully.\n";
                return;
            }
        }
        cout << "Book not found.\n";
    }
};

int main() {
    Library lib;
    int choice;

    do {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n2. Display All Books\n3. Search Book\n4. Delete Book\n0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: lib.addBook(); break;
            case 2: lib.displayBooks(); break;
            case 3: lib.searchBook(); break;
            case 4: lib.deleteBook(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
