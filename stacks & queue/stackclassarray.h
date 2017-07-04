template<typename T>
class stack{
	T *data;
	int capacity;
	int size;
public:
	stack(){
		capacity=10;
		data=new [capacity];
		size=0;
	}
	int count(){
		return size;
	}
	bool empty(){
		return count()==0;
	}
	void push(int data){
		if(size==capacity){
		//TODO;
		}
		data[size++]=data;
		
	
	}
};
