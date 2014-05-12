/* dynamic_cast is used to perform type conversions a run time.
  dynamic_cast can ONLY be used on polymorphic classes, i.e. classes where virtual functions are present.
  On success, dynamic_cast returns a pointer to th object being converted; on failure it returns a 0.*/
#include <iostream>
using namespace std;

class Base {
public:
	virtual void print() {};
};

class Derived : public Base {};

void main() {
	Base *bPtr;
	Derived dObj;
	Derived* dPtr;

	bPtr = &dObj;

	if(dPtr = dynamic_cast<Derived*>(bPtr)) {
		cout << "Type is Derived" << endl;
	}
	else {
		cout << "Type is NOT Derived" << endl;
	}

	getchar();

};