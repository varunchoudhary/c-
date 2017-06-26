#include <iostream>
using namespace std;

class Student {

	public:
	const int rollNumber;
	Student(Student const & s) :rollNumber(s.rollNumber) {
		this->name = new char[strlen(s.name) + 1];
		strcpy(this->name, s.name);
	}

	char * name;
	int getRollNumber() const {
		cout << this << endl;
		return rollNumber;
	}

	/*void setRollNumber(int rollNumber) {
		this->rollNumber = rollNumber;
	}*/

	Student() : rollNumber(0), name(NULL) {
	}

	Student(char * name) :rollNumber(0) {
		//rollNumber = createNextRollNumber();
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}

	~Student() {
		if (name)
			delete [] name;
	}

};

int main() {
	char a[] = "Ankush";
	Student* sp = new Student(a);
	sp->getRollNumber();
	cout << sp->name << endl;
	a[3] = 'i';
	a[4] = 't';
	a[5] = '\0';
	const Student s(a);
	s.name[2] = 'd';

	cout << s.name << endl;
	cout << sp->name << endl;
	
	Student s3(s);
	cout << s3.name << endl;
	s.name[0] = 'd';
	cout << s.name << endl;
	cout << s3.name << endl;


	Student const & s2 = s;
	cout << &s << endl;
	cout << s.getRollNumber() << endl;
	delete sp;
}











