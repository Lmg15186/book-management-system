// hardcopy.h
#ifndef HARDCOPY_H
#define HARDCOPY_H

#include "book.h"

class Hardcopy : public Book {
private:
    int pages;

public:
    Hardcopy(string t, string a, string i, bool av, string d, int p);
    void display() override;
};

#endif
