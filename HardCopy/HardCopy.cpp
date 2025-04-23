// hardcopy.cpp
#include "hardcopy.h"
#include <iostream>

Hardcopy::Hardcopy(string t, string a, string i, bool av, string d, int p)
    : Book(t, a, i, av, d), pages(p) {}

void Hardcopy::display() {
    Book::display();
    cout << "Pages: " << pages << endl;
}

