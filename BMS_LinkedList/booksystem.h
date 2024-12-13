#ifndef BOOKSYSTEM_H
#define BOOKSYSTEM_H

#include <iostream>
#include <string.h>
using namespace std;

class Booksystem {
private:
    int bookId;
    char bookName[30];
    char author[30];
    int price;
    char category[20];
    double rating;

public:
    Booksystem();  // Default constructor
    Booksystem(int id, const char* name, const char* auth, int pr, const char* cat, double rat);  // Parameterized constructor

    void setBookId(int id); 
    int getBookId(); 

    void setBookName(const char* name); 
    const char* getBookName(); 

    void setAuthor(const char* auth);
    const char* getAuthor(); 

    void setPrice(int pr); 
    int getPrice(); 

    void setCategory(const char* cat); 
    const char* getCategory();

    void setRating(double rat);
    double getRating();

    void display();  // Display book details
    
    friend ostream& operator<<(ostream&,Booksystem&);
    friend istream& operator>>(istream& , Booksystem& );
};

#endif
