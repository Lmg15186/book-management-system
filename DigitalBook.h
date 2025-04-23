// digitalbook.h
#ifndef DIGITALBOOK_H
#define DIGITALBOOK_H

#include "book.h"

class DigitalBook : public Book {
private:
    double fileSize;

public:
    DigitalBook(string t, string a, string i, bool av, string d, double f);
    void display() override;
};

#endif
