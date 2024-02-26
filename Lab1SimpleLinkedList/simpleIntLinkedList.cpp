#include <iostream>
#include "simpleIntLinkedList.h"
using namespace std;

ListNode::ListNode(int n)
{
	_item = n;
	_next = NULL;
}

void List::insertHead(int n)
{
	ListNode *aNewNode = new ListNode(n);
	aNewNode->_next = _head;
	_head = aNewNode;
	_size++;
};

void List::removeHead()
{
	if (_size > 0) {
		ListNode *temp = _head;
		_head = _head->_next;
		delete temp;
		_size--;
	}
}

void List::print() {
	ListNode *current = _head;

	for (int i = _size; i >= 0; i--) {

		if (i == 0) {
			cout << endl;
		}
		else {
			cout << current->_item << " ";
			current = current->_next;
		}	
	}
}

bool List::exist(int n) {
	ListNode *current = _head;

	for (int i = _size; i >= 0; i--) {
		if (i == 0) {
			return 0;
		}
		if (current->_item == n) {
			return 1;
		}
		current = current->_next;
	}
}


int List::headItem()
{
	return 0; // modify this
}


List::~List()
{
	while (_size != 0)
		removeHead();
};

