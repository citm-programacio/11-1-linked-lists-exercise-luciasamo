// LinkedList.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Implement the push_back function:
//void push_back(const int& value) { ... }
//Implement the insert function :
//void insert(unsigned int position, const int& value) { ... }
//Implement the print function.It prints the whole list from beginning to end :
//void print() { ... }
//From the main function, insert 5 elements in different positions and print the whole list after each insertion


#include <iostream>
using namespace std;


// Declaration of a doubly-linked list
class List {
public:
	// Constructor and destructor
	List();
	~List();

	// Modifiers
	void push_front(const int& value);
	void push_back(const int& value);
	void pop_front();
	void pop_back();
	void insert(unsigned int position, const int& value);
	void erase(unsigned int position);
	void clear();

	// Getters
	int& front();
	int& back();
	int& value_at(unsigned int position);
	bool empty() const;
	unsigned int size() const;

private:
	// Internal struct for list nodes
	struct Node {
		int value;
		Node* next;
		Node* prev;
	};

	// List internals
	Node* first = nullptr;
	Node* last = nullptr;
	unsigned int num_elems = 0;
};

void push_back(const int &value) {
	Node* new_node = new Node;
	new_node->value = value;
	new_node->next = nullptr;
	new_node->prev = last;

	if (last != nullptr) {
		last->next = new_node;
	}
	last = new_node;

	if (first == nullptr) {
		first = new_node;
	}

	num_elems++;
}

void insert(unsigned int position, const int& value) {

}

void print() {

}


int main()
{
	List list;

	// Insert elements in various positions and print the list after each insertion
	list.push_back(10); // Insert at the end
	list.print();

	list.insert(0, 5);  // Insert at the beginning
	list.print();

	list.insert(1, 7);  // Insert at position 1
	list.print();

	list.insert(2, 8);  // Insert at position 2
	list.print();

	list.insert(3, 12); // Insert at position 3
	list.print();

	return 0;
}