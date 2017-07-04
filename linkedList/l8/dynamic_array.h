class dynamic_array {
	int* data;
	int capacity;
	int size;

	void resize() {
		int * temp = data;
		data = new int[2 * capacity];
		capacity *= 2;
		for (int i = 0; i < size; i++) {
			data[i] = temp[i];
		}
		delete [] temp;
	}

	void checkBounds(int index) {
		if (index >= size) {
			throw "Index too large";
		}
		if (index < 0) {
			throw "Negative Index!";
		}
	}

	public:

	~dynamic_array() {
		delete [] data;
	}

	dynamic_array(int capacity = 10) {
		data = new int[capacity];
		this->capacity = capacity;
		size = 0;
	}

	dynamic_array(dynamic_array const & d) {
		data = new int[d.capacity];
		this->capacity = d.capacity;
		this->size = d.size;
		for (int i = 0; i < size; i++) {
			data[i] = d.data[i];
		}
	}

	dynamic_array& operator= (dynamic_array const & d) {
		delete [] data;
		data = new int[d.capacity];
		this->capacity = d.capacity;
		this->size = d.size;
		for (int i = 0; i < size; i++) {
			data[i] = d.data[i];
		}
		return *this;
	}

	void set(int element, int index) {
		checkBounds(index);
		data[index] = element;
	}

	int get(int index) {
		checkBounds(index);
		return data[index];	
	}

	int remove(int index) {
		checkBounds(index);
		int toBeReturned = data[index];
		for (int i = index + 1; i < size; i++) {
			data[i - 1] = data[i];
		}
		size--;
		return toBeReturned;
	}

	void insert(int element, int index) {
		if (index == size) {
			push_back(element);
			return;
		}
		checkBounds(index);
		int lastElement = data[size - 1];
		for (int i = size - 2; i >= index; i--) {
			data[i + 1] = data[i];
		}
		data[index] = element;
		push_back(lastElement);
	}

	bool empty() {
		return size == 0;
	}

	int count() {
		return size;
	}

	int pop_back() {
		if (size == 0) {
			throw "Empty Array Error";
		}
		int toBeReturned = data[size - 1];
		size--;
		return toBeReturned;
	}

	void push_back(int element) {
		if (size == capacity) {
			resize();
		}
		data[size] = element;
		size++;
	}

};
