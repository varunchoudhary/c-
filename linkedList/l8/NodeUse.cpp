#include <iostream>
#include "Node.h"
using namespace std;

Node<int>* takeInput() {
	int n;
	cin >> n;
	Node<int>* head = NULL;
	Node<int>* tail = NULL;
	while (n != -1) {
		Node<int>* node = new Node<int>(n);
		if (!head) {
			head = node;
			tail = head;
		} else {
			tail->next = node;
			tail = node;
		}
		cin >> n;
	}
	return head;
}

void print(Node<int>* head) {
	Node<int>* temp = head;
	while (head) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << endl;
}
int main() {
cout<<"asd";
	Node<int>* head = takeInput();
	print(head);
	//print(head);
	cout<<"hell";
	//Node<int>* temp = head;
	//delete head;
return 0;
}

