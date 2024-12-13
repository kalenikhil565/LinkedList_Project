#include <iostream>
#include "linklist.cpp"
using namespace std;

int main() {
	Linklist<Booksystem> lt;
	lt.readFile("object.bin");
	int choice = 0;

	while (choice != 8) {
		cout << "\n====================================";
		cout << "\n      Book Management System       ";
		cout << "\n====================================";
		cout << "\n1. Add Book";
		cout << "\n2. Display All Books";
		cout << "\n3. Search Book by ID";
		cout << "\n4. Delete Book by ID";
		cout << "\n5. Update Book by ID";
		cout << "\n6. Sort Books by Price";
		cout << "\n7. Sort Books by Rating";
		cout << "\n8. Exit";
		cout << "\n====================================";
		cout << "\nEnter your choice (1-8): ";
		cin >> choice;

		switch (choice) {
			case 1: {
				int bookId, price;
				char name[30], author[30], category[30];
				double rating;

				cout << "\nEnter Book ID: ";
				cin >> bookId;
				cout << "Enter Name: ";
				cin.ignore();
				cin.getline(name, 30);
				cout << "Enter Author: ";
				cin.getline(author, 30);
				cout << "Enter Price: ";
				cin >> price;
				cout << "Enter Category: ";
				cin.ignore();
				cin.getline(category, 30);
				cout << "Enter Rating: ";
				cin >> rating;

				Booksystem bs(bookId, name, author, price, category, rating);

				int pos;
				cout << "\nEnter position to insert: ";
				cin >> pos;
				lt.insertPos(bs, pos);
				cout << "\nBook inserted at position : "<<lt.getCount();
				break;
			}

			case 2:
				lt.display();
				cout << "Total number of books: " << lt.getCount() << endl;
				break;

			case 3: {
				int searchId;
				cout << "\nEnter Book ID to search: ";
				cin >> searchId;
				lt.searchById(searchId);
				break;
			}

			case 4: {
				int bookId;
				cout << "\nEnter Book ID to delete: ";
				cin >> bookId;
				lt.deleteById(bookId);
				break;
			}

			case 5: {
				int updateId;
				cout << "\nEnter Book ID to update: ";
				cin >> updateId;

				int newPrice;
				double newRating;
				cout << "Enter new Price: ";
				cin >> newPrice;
				cout << "Enter new Rating: ";
				cin >> newRating;

				lt.updateBook(updateId, newPrice, newRating);
				break;
			}

			case 6:
				lt.sortBooksByPrice();
				lt.display();
				lt.sortBooksByBookId();
				break;

			case 7:
				lt.sortBooksByRating();
				lt.display();
				lt.sortBooksByBookId();
				break;
				
			case 8:
				cout << "\nSaving data and exiting...\n";
				lt.writeFile("object.bin");
				cout << "\n.....Exiting.....\n";
				break;

			default:
				cout << "\nInvalid Choice!\n";
				break;
		}
	}

	return 0;
}
