class abc {

};

template <typename T, typename V>
class mypair {
	T first;
	V second;

	public:
	mypair(T first, V second) {
		//abc v = (abc)first;
		this->first = first;
		this->second = second;
	}

	void setFirst(T first) {
		this->first = first;
	}

	T getFirst() {
		return first;
	}
};


template <class T>
void bubbleSort(T a[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (a[j] > a[j + 1]) {
				T temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}









