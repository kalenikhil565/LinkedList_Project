#ifndef LINKLIST_H
#define LINKLIST_H

#include "node.cpp"
#include<fstream>

template<class T>
class Linklist {
		Node<T>* start;
		int count; // Count is now a regular member variable

	public:
		Linklist(); // Constructor
		void insertPos(T, int);
		void deleteById(int);
		void display();
		void searchById(int);
		void updateBook(int, int, double);
		void sortBooksByPrice();
		void sortBooksByRating();
		int getCount();
		void readFile(char* file);
		void writeFile(char* file);
		void sortBooksByBookId();
		~Linklist();
};

#endif
