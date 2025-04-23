// book.cpp
#include "book.h"
#include <iostream>

Book::Book(string t, string a, string i, bool av, string d)
    : title(t), author(a), ISBN(i), available(av), dateAdded(d) {}

void Book::display() {
    cout << "Title: " << title << "\nAuthor: " << author
         << "\nISBN: " << ISBN << "\nAvailable: " << (available ? "Yes" : "No")
         << "\nDate Added: " << dateAdded << endl;
}

string Book::getTitle() const {
    return title;
}
