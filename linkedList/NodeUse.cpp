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



void changer(Node<int> *head){
	Node<int>* temp=head;
	int size;
	while(head){
		head=head->next;
		size++;
	}
	cout<<size<<endl;
	int mid;
	if(size%2==0)
	 mid=size/2;
	else
		mid=(size+1)/2;
	cout<<mid<<endl;
	Node<int>* temp2=temp;
	head=temp;
	int i=0;
	while(i!=mid){head=head->next;i++;}
	
	cout<<i<<endl;
	while(mid!=size){
		temp2->data=temp->data;
		temp2=temp2->next;
		temp=temp->next;
		temp2->data=head->data;
		temp2=temp2->next;		
		head=head->next;
		mid++;
	}
	cout<<"gal"<<endl;
 while(!temp2){
 	cout<<temp2->data<<"-->";
 	temp2=temp2->next;
 }

}
Node<int>* deleteDup(Node<int>* head){

	if(head!=NULL||head->next!=NULL){
	 return head;	
	}
	
		if(head->data==head->next->data){
			int t=head->data;
			while(head &&head->data==t){
				Node<int>*t1=head;
				head=head->next;
				t1->next=NULL;
				delete t1;
			}
			return deleteDup(head);
		}else{
			head->next =deleteDup(head->next);
			return head;
		}
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
	Node<int>* head = takeInput();
	print(head);
	Node<int>* head=deleteDup(head);
	print();
	//changer(head);
	Node<int>* temp = head;
	delete head;
}


