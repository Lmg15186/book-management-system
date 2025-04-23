// digitalbook.cpp
#include "digitalbook.h"
#include <iostream>

DigitalBook::DigitalBook(string t, string a, string i, bool av, string d, double f)
    : Book(t, a, i, av, d), fileSize(f) {}

void DigitalBook::display() {
    Book::display();
    cout << "File Size: " << fileSize << "MB" << endl;
}

