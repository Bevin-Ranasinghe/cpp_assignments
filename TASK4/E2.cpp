#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title, author;
    int year;

public:
    Book(string t = "", string a = "", int y = 0) {
        title = t;
        author = a;
        year = y;
    }

    void show() const {
        cout << "Title: " << title << ", Author: " << author << ", Year: " << year << endl;
    }

    ~Book() {
        cout << "Book deleted: " << title << endl;
    }
};

class BookShelf {
private:
    Book* books;
    int count;

public:
    BookShelf(int n) {
        count = n;
        books = new Book[count];
    }

    void addBooks() {
        for (int i = 0; i < count; i++) {
            string t, a;
            int y;
            cout << "Enter title, author and year for book " << i+1 << ": ";
            cin.ignore();
            getline(cin, t);
            getline(cin, a);
            cin >> y;
            books[i] = Book(t, a, y);
        }
    }

    void showBooks() const {
        for (int i = 0; i < count; i++) {
            books[i].show();
        }
    }

    ~BookShelf() {
        delete[] books;
        cout << "Shelf destroyed" << endl;
    }
};

int main() {
    int n;
    cout << "Number of books: ";
    cin >> n;

    BookShelf shelf(n);
    shelf.addBooks();
    shelf.showBooks();

    return 0;
}
