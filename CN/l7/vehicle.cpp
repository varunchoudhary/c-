#include <iostream>
using namespace std;

class vehicle {
	protected:
	int price;
	char* color;

	public:

	/*vehicle() {
		cout << "Vehicle constructed " << endl;
	}*/

	vehicle(int price) {
		this->price = price;
		cout << "Vehicle constructed " << endl;
	}

	virtual void print() {
		cout << "Vehicle" << endl;
		cout << this->price << endl;
		//cout << this->color << endl;
	}
	int getPrice() {
		return price;
	}

	void setPrice(int price) {
		this->price = price;
	}
};

class car : public vehicle {
	char* make;
	int registration;
	
	public:
	car(int price) :vehicle(price) {
		cout << "Car constructed " << endl;
	}

	void print2() {
		cout << "car" << endl;
	}

	void print() {
		cout << "Car" << endl;
		//cout << this->make << endl;
		cout << this->registration << endl;
	}
};

int main() {
	vehicle * pv = new vehicle(10);
	int i;
	cin >> i;
	vehicle* pv1;
	if (i == 1) {
		pv1 = new car(10202);
	} else {
		pv1 = new vehicle(122);
	}

	pv1->print();

	vehicle v(100);
	cout << v.getPrice() << endl;
	v.print();
	car c(1000);
	cout << sizeof(c) << endl;
	//cout << c.getPrice() << endl;
	c.print();
}

