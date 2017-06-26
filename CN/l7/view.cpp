#include <iostream>
using namespace std;

class view {
	int height;
	int width;
	public:

	static int numViews() {
		view v;
		cout << v.height << endl;
		return 100;
	}

	view(int height, int width) {
		this->height = height;
		this->width = width;
	}
	virtual void draw() = 0;

	int print() {
		return 0;
	}
};

class button: public view {
	public:
		button(): view(10,15) {

		}
		void draw()  {

		}

		void print2() {

		}
};

int main() {
	view * v = new button();
	button b;
}

