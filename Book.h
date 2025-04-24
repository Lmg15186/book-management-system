#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string title;
    string author;
    string isbn;
    bool available;
    string dateAdded;

public:
    Book(string t, string a, string i, bool avail, string d)
        : title(t), author(a), isbn(i), available(avail), dateAdded(d) {}

    virtual void displayBookDetails() {
        cout << "Title: " << title << "\nAuthor: " << author << "\nISBN: " << isbn
             << "\nAvailability: " << (available ? "Available" : "Borrowed")
             << "\nDate Added: " << dateAdded << "\n------------------------\n";
    }

    string getISBN() { return isbn; }
    bool isAvailable() { return available; }
    void borrowBook() { available = false; }
    void returnBook() { available = true; }
    string getTitle() { return title; }
};

#endif
