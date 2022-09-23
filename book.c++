#include <iostream>
using namespace std;

// TODO: Write a program that declares a structure 'Book' having id, price and pages as its data members. Declare an array of structure and take data of 5 books and display the record of most costly book

struct Book
{
    int id;
    int pages;
    int price;
};

int main()
{
    Book A[5],
        maxPriceBook,
        temp; // for swapping prices

    // Taking book data from user
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". Book ID: ";
        cin >> A[i].id;
        cout << i + 1 << ". Book Pages: ";
        cin >> A[i].pages;
        cout << i + 1 << ". Book Price: ";
        cin >> A[i].price;
    }

    // assigning first book to maxPriceBook
    maxPriceBook = A[0];
    for (int i = 1; i < 5; i++)
    {
        if (maxPriceBook.price < A[i].price)
        {
            // swapping
            temp = maxPriceBook;
            maxPriceBook = A[i];
            A[i] = temp;
        }
    }

    // Displaying `most costly` book record
    cout << "\nRecord of most costly book is below:\n";
    cout << "Book ID: " << maxPriceBook.id << endl;
    cout << "Book Pages: " << maxPriceBook.pages << endl;
    cout << "Book Price: " << maxPriceBook.price << endl;

    return 0;
}