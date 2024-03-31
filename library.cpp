#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to represent a book
struct Book {
    string title;
    string author;
    string genre;
};

// Function to add a new book to the library
void addBook(vector<Book> &library) {
    Book newBook;
    cout << "Enter book title: ";
    cin.ignore();
    getline(cin, newBook.title);
    cout << "Enter book author: ";
    getline(cin, newBook.author);
    cout << "Enter book genre: ";
    getline(cin, newBook.genre);
    library.push_back(newBook);
    cout << "Book added to the library successfully!\n";
}

// Function to display the list of available books in the library
void displayLibrary(const vector<Book> &library) {
    cout << "\nLibrary Catalog:\n";
    for (const Book &book : library) {
        cout << "Title: " << book.title << endl;
        cout << "Author: " << book.author << endl;
        cout << "Genre: " << book.genre << endl;
        cout << "--------------------------\n";
    }
}

// Function to search for a book by its title
void searchBook(const vector<Book> &library, const string &title) {
    bool found = false;
    for (const Book &book : library) {
        if (book.title == title) {
            cout << "Book found:\n";
            cout << "Title: " << book.title << endl;
            cout << "Author: " << book.author << endl;
            cout << "Genre: " << book.genre << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Book with title '" << title << "' not found in the library.\n";
    }
}

int main() {
    vector<Book> library;
    int choice;
    string searchTitle;

    do {
        // Display menu options
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Display Library\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Perform action based on user's choice
        switch (choice) {
            case 1:
                addBook(library);
                break;
            case 2:
                displayLibrary(library);
                break;
            case 3:
                cout << "Enter the title of the book to search: ";
                cin.ignore();
                getline(cin, searchTitle);
                searchBook(library, searchTitle);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
