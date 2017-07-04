#include<iostream>
#include"Node.h"

using namespace std;

Node<int >* deleteDup(Node<int>* head){
	Node*temp=head;
	if(head!=NULL||head->next!=NULL){
		return head;	
	}
	while(!temp){
		if(temp->data==temp->next->data){
			//int t	
			//while(temp->data!=temp->next->data){
				node*t1;
				t1=temp->next;
				temp->next=NULL;
				delete(temp);
				temp=t1;
			//}
		}
	}
}


