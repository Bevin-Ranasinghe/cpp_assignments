#include <iostream>
#include <string>
using namespace std;


class Book {
private:
    string title;
    int pages;
    string author = "Peter";

protected:
    float price;

public:
    string publisher;

    void setTitle(string t) {
        title = t;
    }

    string getTitle() {
        return title;
    }

    void displayAuthorInfo() {
        cout << "Author: " << author << endl;
    }
};

int main() {
    // Part A: Set a title and print it
    Book myBook;
    myBook.setTitle("C++ Programming");
    cout << "Title: " << myBook.getTitle() << endl;

    // Part B: Set and print publisher
    myBook.publisher = "TechBooks Publishing";
    cout << "Publisher: " << myBook.publisher << endl;

    // Part C: Call displayAuthorInfo
    myBook.displayAuthorInfo();

    return 0;
}
