#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include "Book.h"
#include <vector>
#include <algorithm>

class UserInterface {
public:
    static void sortBooksByTitle(vector<Book*>& books) {
        sort(books.begin(), books.end(), [](Book* a, Book* b) {
            return a->getTitle() < b->getTitle();
        });
    }
};

#endif

