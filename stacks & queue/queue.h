template <typename T>
class queue {
	T* data;
	int capacity;
	int size;
	int firstIndex;
	int lastIndex;

	void resize() {
		T* temp = data;
		data = new T[2*capacity];
		int k = 0;
		for (int i = firstIndex; i < capacity; i++) {
			data[k++] = temp[i];
		}

		for (int i = 0; i <= firstIndex - 1; i++) {
			data[k++] = temp[i];
		}
		firstIndex = 0;
		lastIndex = capacity - 1;
		capacity *= 2;
		delete [] temp;
	}

	public:
	queue() {
		capacity = 10;
		data = new T[capacity];
		size = 0;
		firstIndex = -1;
		lastIndex = -1;
	}

	int count() {
		return size;
	}

	bool empty() {
		return count() == 0;
	}

	T pop() {
		if (size == 0) {
			StackEmptyException e;
			throw e;
		}
		
		T output = data[firstIndex];
		firstIndex = (firstIndex + 1) % capacity;
		size--;	
		if (size == 0) {
			firstIndex = -1;
			lastIndex = -1;
		}
	}

	T top() {
		if (size == 0) {
			StackEmptyException e;
			throw e;
		}
		return data[firstIndex];
	}

	void push(T element) {
		if (size == capacity) {
			resize();	
		}
		lastIndex = (lastIndex + 1 ) % capacity;
		data[lastIndex] = element;
		size++;
		if (firstIndex == -1) {
			firstIndex = 0;
		}
	}
};
