#include "booksystem.h"

Booksystem::Booksystem() {
    this->bookId = 0;
    strcpy(this->bookName, "");
    strcpy(this->author, "");
    this->price = 0;
    strcpy(this->category, "");
    this->rating = 0.0;
}

Booksystem::Booksystem(int id, const char* name, const char* auth, int pr, const char* cat, double rat) {
    this->bookId = id;
    strcpy(this->bookName, name); 
    strcpy(this->author, auth);
    this->price = pr;
    strcpy(this->category, cat);
    this->rating = rat; 
}

void Booksystem::setBookId(int id) {
    this->bookId = id;
}

int Booksystem::getBookId() {
    return this->bookId; 
}

void Booksystem::setBookName(const char* name) {
    strcpy(this->bookName, name);
}

const char* Booksystem::getBookName() {
    return this->bookName;
}

void Booksystem::setAuthor(const char* auth) {
    strcpy(this->author, auth);
}

const char* Booksystem::getAuthor() {
    return this->author;
}

void Booksystem::setPrice(int pr) {
    this->price = pr;
}

int Booksystem::getPrice() {
    return this->price;
}

void Booksystem::setCategory(const char* cat) {
    strcpy(this->category, cat);
}

const char* Booksystem::getCategory() {
    return this->category;
}

void Booksystem::setRating(double rat) {
    this->rating = rat; 
}

double Booksystem::getRating() {
    return this->rating;
}

void Booksystem::display() {
    cout << "\n===================================" << endl;
    cout << "           Book Details            " << endl;
    cout << "===================================" << endl;
    cout << "Book ID     : " << bookId << endl;
    cout << "Book Name   : " << bookName << endl;
    cout << "Author      : " << author << endl;
    cout << "Price       : " << price << " INR" << endl;
    cout << "Category    : " << category << endl;
    cout << "Rating      : " << rating << " / 10" << endl;
    cout << "===================================" << endl;

}


 ostream& operator<<(ostream& o,Booksystem& b){
 	
    o << "Book ID: " << b.bookId << endl;
    o << "Book Name: " << b.bookName << endl;
    o << "Author: " << b.author << endl;
    o << "Price: " << b.price << endl;
    o << "Category: " << b.category << endl;
    o << "Rating: " << b.rating << endl;
    return o;
 }
 
 istream& operator>>(istream& in, Booksystem& bs) {
    cout << "Enter Book ID: ";
    in >> bs.bookId;
    in.ignore(); // Clear the input buffer
    cout << "Enter Book Name: ";
    in.getline(bs.bookName, 30);
    cout << "Enter Author Name: ";
    in.getline(bs.author, 30);
    cout << "Enter Price: ";
    in >> bs.price;
    in.ignore();
    cout << "Enter Category: ";
    in.getline(bs.category, 20);
    cout << "Enter Rating: ";
    in >> bs.rating;
    return in;
}