#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Book {
protected:
    string title;
    string author;
    string isbn;
    bool available;

public:
    Book(string t, string a, string i, bool avail)
        : title(t), author(a), isbn(i), available(avail) {}

    string getTitle() const { return title; }
    string getISBN() const { return isbn; }
    bool isAvailable() const { return available; }

    void displayBookDetails() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Availability: " << (available ? "Available" : "Borrowed") << endl;
        cout << "-------------------------" << endl;
    }

    void borrowBook() {
        if (available) {
            available = false;
            cout << "The book \"" << title << "\" has been successfully borrowed." << endl;
        } else {
            cout << "Sorry, the book \"" << title << "\" is already borrowed." << endl;
        }
    }
};

class DigitalBook : public Book {
public:
    DigitalBook(string t, string a, string i, bool avail)
        : Book(t, a, i, avail) {}
};

class Hardcopy : public Book {
public:
    Hardcopy(string t, string a, string i, bool avail)
        : Book(t, a, i, avail) {}
};

void sortBooksByTitle(vector<Book>& books, bool ascending = true) {
    sort(books.begin(), books.end(), [ascending](const Book& a, const Book& b) {
        return ascending ? (a.getTitle() < b.getTitle()) : (a.getTitle() > b.getTitle());
    });
}

int main() {
    vector<Book> ascBooks = {
        Book("Astrology For The Soul", "Jan Spiller", "111", true),
        Book("Dom Casmurro", "Machado de Assis", "222", true),
        Book("Harry Potter", "J.K. Rowling", "444", true)
    };

    vector<Book> descBooks = {
        Book("Harry Potter", "J.K. Rowling", "444", true),
        Book("The Alchemist", "Paulo Coelho", "333", true),
        Book("The Tarot Bible", "Sarah Bartlett", "555", true)
    };

    vector<Book> mixedBooks = {
        Book("The Alchemist", "Paulo Coelho", "333", true),
        Book("Astrology For The Soul", "Jan Spiller", "111", true),
        Book("Dom Casmurro", "Machado de Assis", "222", true)
    };

    cout << "\n--- Ascending Order BEFORE Sorting ---\n";
    for (Book b : ascBooks) b.displayBookDetails();
    sortBooksByTitle(ascBooks, true);
    cout << "\n--- Ascending Order AFTER Sorting ---\n";
    for (Book b : ascBooks) b.displayBookDetails();

    cout << "\n--- Descending Order BEFORE Sorting ---\n";
    for (Book b : descBooks) b.displayBookDetails();
    sortBooksByTitle(descBooks, false);
    cout << "\n--- Descending Order AFTER Sorting ---\n";
    for (Book b : descBooks) b.displayBookDetails();

    cout << "\n--- Mixed Order BEFORE Sorting ---\n";
    for (Book b : mixedBooks) b.displayBookDetails();
    sortBooksByTitle(mixedBooks, true);
    cout << "\n--- Mixed Order AFTER Sorting ---\n";
    for (Book b : mixedBooks) b.displayBookDetails();

    return 0;
}
