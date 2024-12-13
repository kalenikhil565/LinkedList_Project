#include <iostream>
#include"booksystem.h"
using namespace std;

template<class T>
class Node {
	T data;
	Node<T>* next;

public:
	Node(T &d);
	void setData(T &d);
	T& getData();
	void setNext(Node<T>* n);
	Node<T>* getNext();
};

