#include <iostream>
using namespace std;

class complex_number {
	public:
	int r;
	int i;
	
	void operator++ (int) {
		(this->r)++;
		(this->i)++;
	}

	void operator++ () {
		(this->r)++;
		(this->i)++;
	}

	complex_number() {
		cout << "Default" << endl;
		r = 0;
		i = 0;
	}

	complex_number(complex_number const & c) {
		cout << "copy constructor" << endl;
		this->r = c.r;
		this->i = c.i;
	}

	complex_number(int r, int i) {
		cout << "Custom" << endl;
		this->r = r;
		this->i = i;
	}


	void print() {
		cout << this->r << " + i" << this->i << endl;
	}



	void multiply(complex_number const & c2) {
		int r = this->r * c2.r - this->i * c2.i;
		int i = this->i * c2.r + this->r * c2.i;
		this->r = r;
		this->i = i;
	}

	void add(complex_number const & c2) {
		this->r += c2.r;
		this->i += c2.i;
	}

	complex_number &  operator+= (complex_number const & c2) {
		this->r += c2.r;
		this->i += c2.i;
		return *this;
	}

	complex_number operator+ (complex_number const & c2) const {
		complex_number out(this->r + c2.r, this->i + c2.i);
		cout << &out << endl;
		return out;
	}


};

int main() {

	int i = 10;
	int j = 10;
	(i += j) += 2;

	cout << i << endl;
	cout << j << endl;

	complex_number c(10, 12);
	complex_number c1(1, 2);

	complex_number c2 = c + c1;
	cout << " + done" << endl;
	c.print();
	c1.print();
	c2.print();
	cout << &c2 << endl;
	(c += c1) += c2;
	cout << " += done" << endl;
	c.print();
	c1.print();
	c2.print();

	c.add(c1);
	c.print();
	c1.print();

	c1.multiply(c);
	c.print();
	c1.print();

//	complex_number c2(c);
}

