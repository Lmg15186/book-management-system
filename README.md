#include "Book.h"
#include "DigitalBook.h"
#include "Hardcopy.h"
#include "UserInterface.h"

int main() {
    vector<Book*> booksAsc = {
        new Hardcopy("The Alchemist", "Paulo Coelho", "333", true, "2024-01-10"),
        new DigitalBook("Dom Casmurro", "Machado de Assis", "222", true, "2024-01-12"),
        new Hardcopy("Harry Potter", "J.K. Rowling", "444", true, "2024-01-15")
    };

    vector<Book*> booksDesc = {
        new Hardcopy("Harry Potter", "J.K. Rowling", "444", true, "2024-01-15"),
        new DigitalBook("Dom Casmurro", "Machado de Assis", "222", true, "2024-01-12"),
        new Hardcopy("The Alchemist", "Paulo Coelho", "333", true, "2024-01-10")
    };

    vector<Book*> booksMixed = {
        new DigitalBook("Dom Casmurro", "Machado de Assis", "222", true, "2024-01-12"),
        new Hardcopy("The Alchemist", "Paulo Coelho", "333", true, "2024-01-10"),
        new Hardcopy("Harry Potter", "J.K. Rowling", "444", true, "2024-01-15")
    };

    cout << "\nBefore Sorting (Mixed Order):\n";
    for (Book* book : booksMixed) book->displayBookDetails();

    UserInterface::sortBooksByTitle(booksMixed);

    cout << "\nAfter Sorting (Mixed Order):\n";
    for (Book* book : booksMixed) book->displayBookDetails();

    return 0;
}
