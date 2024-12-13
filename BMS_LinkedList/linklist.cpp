#include "linklist.h"
#include <iostream>
using namespace std;


template<class T>
Linklist<T>::Linklist() {
    start = NULL;
    count = 0;
}

template<class T>
void Linklist<T>::insertPos(T data, int pos) {
    Node<T>* temp = new Node<T>(data);
    if (start == NULL) {
        start = temp;
         count++;
        return;
    } else if (pos == 1) {
        temp->setNext(start);
        start = temp;
         count++;
        cout << "\nBook inserted at the beginning!" << endl;
    } else {
        Node<T>* p = start;
        int i = 1;
        while (i < pos - 1 && p->getNext() != NULL) {
            p = p->getNext();
            i++;
        }
        temp->setNext(p->getNext());
        p->setNext(temp);
        
        count++;
    }
}

template<class T>
void Linklist<T>::deleteById(int bookId) {
    if (start == NULL) {
        cout << "\nNo books to delete!" << endl;
        return;
    }

    // Case 1: Deleting the first node
    if (start->getData().getBookId() == bookId) {
        Node<T>* temp = start;
        start = start->getNext();
        delete temp;
        count--;
        cout << "\nBook with ID " << bookId << " deleted!" << endl;
        return;
    }

    // Case 2: Deleting a node other than the first
    Node<T>* p = start;
    while (p->getNext() != NULL && p->getNext()->getData().getBookId() != bookId) {
        p = p->getNext();
    }

    if (p->getNext() == NULL) {
        cout << "\nBook with ID " << bookId << " not found!" << endl;
    } else {
        Node<T>* temp = p->getNext();
        p->setNext(temp->getNext());
        delete temp;
        count--;
        cout << "\nBook with ID " << bookId << " deleted!" << endl;
    }
}


template<class T>
void Linklist<T>::display() {
    if (start == NULL) {
        cout << "\nNo books to display!" << endl;
        return;
    }
    Node<T>* temp = start;
    while (temp != NULL) {
        temp->getData().display();
        temp = temp->getNext();
    }
}

template<class T>
void Linklist<T>::searchById(int id) {
    Node<T>* temp = start;
    while (temp != NULL) {
        if (temp->getData().getBookId() == id) {
            temp->getData().display();
            return;
        }
        temp = temp->getNext();
    }
    cout << "\nBook ID not found!" << endl;
}

template<class T>
void Linklist<T>::updateBook(int id, int newPrice, double newRating) {
    Node<T>* temp = start;
    while (temp != NULL) {
        if (temp->getData().getBookId() == id) {
            temp->getData().setPrice(newPrice);
            temp->getData().setRating(newRating);
            cout << "\nBook details updated successfully!" << endl;
            return;
        }
        temp = temp->getNext();
    }
    cout << "\nBook ID not found!" << endl;
}

template<class T>
void Linklist<T>::sortBooksByBookId() {
    if (start == NULL || start->getNext() == NULL) {
        cout << "\nNot enough books to sort!" << endl;
        return;
    }

    for (Node<T>* i = start; i != NULL; i = i->getNext()) {
        for (Node<T>* j = i->getNext(); j != NULL; j = j->getNext()) {
            if (i->getData().getBookId() > j->getData().getBookId()) {
                Booksystem temp = i->getData();
                i->setData(j->getData());
                j->setData(temp);
            }
        }
    }
}


template<class T>
void Linklist<T>::sortBooksByPrice() {
    if (start == NULL || start->getNext() == NULL) {
        cout << "\nNot enough books to sort!" << endl;
        return;
    }

    for (Node<T>* i = start; i != NULL; i = i->getNext()) {
        for (Node<T>* j = i->getNext(); j != NULL; j = j->getNext()) {
            if (i->getData().getPrice() > j->getData().getPrice()) {
                Booksystem temp = i->getData();
                i->setData(j->getData());
                j->setData(temp);
            }
        }
    }
    cout << "\nBooks sorted by price!" << endl;
}

template<class T>
void Linklist<T>::sortBooksByRating() {
    if (start == NULL || start->getNext() == NULL) {
        cout << "\nNot enough books to sort!" << endl;
        return;
    }

    for (Node<T>* i = start; i != NULL; i = i->getNext()) {
        for (Node<T>* j = i->getNext(); j != NULL; j = j->getNext()) {
            if (i->getData().getRating() < j->getData().getRating()) {
                Booksystem temp = i->getData();
                i->setData(j->getData());
                j->setData(temp);
            }
        }
    }
    cout << "\nBooks sorted by rating!" << endl;
}

template<class T>
int Linklist<T>::getCount()
{
	return count;
}

template<class T>
void Linklist<T>::readFile( char* file)
{
	ifstream in(file,ios::binary);
	
	T data;
	int i=1;
	while(in.read(reinterpret_cast<char*>(&data),(sizeof(T)))){
		this->insertPos(data ,i);
		i++;
	}
	in.close(); 

}

template<class T>
void Linklist<T>::writeFile( char* file)
{
	ofstream out(file,ios::binary);
	
	Node<T>* p = start;
	while(p!=NULL)
	{
		T Data = p->getData();
		out.write(reinterpret_cast<char*>(&Data),sizeof(T));
		p=p->getNext();
	}
	out.close(); 

}

template<class T>
Linklist<T>::~Linklist() {
    
    Node<T>* temp;
    while (start != NULL) {
        temp = start;        
        start = start->getNext();  
        delete temp;        
    }
}


