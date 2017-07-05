Template<typename T>
struct node{
	int data;
	node* next;
};
class stack{
		node*topi;
		int size;
	public:
	stack(){
		top=NULL;
	}
	void push(int data);
	void pop();
	int top();
	int count();
};
void stack::push(int data){
	node*ptr;
	ptr= new node;
	ptr->data=data;
	ptr->next=NULL;
	if(topi!=NULL)
		ptr->next=topi;
	topi=ptr;
	size++;
}	
void stack::pop(){
	node*temp;
	if(topi==NULL){
	//TODO
	}
	temp=topi;
	topi=topi->next;
	delete temp;
	size--;
}
int count(){
	return size;
}
int stack::top(){
	node* t=top;
	while(t->next!=NULL){
		t=t->next;
	}
	return t->data;
}

