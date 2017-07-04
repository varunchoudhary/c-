template<typename T>
class stack{
	T *data;
	int capacity;
	int size;
	int lastindex;
	void resize(){
		T*temp=data;
		data=new T[2*capacity];
		int k=0;
		for(int i=0;i<lastindex;i++){
			data[k++]=temp[i];
		}
		lastindex=capacity-1;
		capacity*=2;
		delete [] temp;
	}
public:
	stack(){
		capacity=10;
		data=new [capacity];
		size=0;
		lastindex=-1;
	}
	int count(){
		return size;
	}
	bool empty(){
		return count()==0;
	}
	void push(int data){
		if(size==capacity){
			resize();
		}
		lastindex+=1;
		data[lastindex]=data;
		size++;
	}
	void pop(){
		if(size==0){
		//TODO;
		}
		T output=data[lastindex];
		lastindex--;
		size--;
		if(size==0){
			lastindex=-1;
		}
		
	}
	T top(){
		if(size==0){
		//TODO;
		}
		return data[lastindex];
	}
};
