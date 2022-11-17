#include <iostream>
#include <time.h>
using namespace std;

class Point {


public:
	Point() 
	{ x = y = 0; }
	Point(int x_, int y_){
		x = x_;
		y = y_;
	}

	void Print() {
		cout << x << " " << y << endl;
	}
	
	void setPoint(int x_, int y_) {
		x = x_;
		y = y_;
	}

private:
	int x, y;
};

class Figure {
private:
	Point* objP;
	int count;

public:

	Figure() {
		objP = NULL;
		count = 0;
	}

	void createFigure(int count_) {
		if (count_ < 3) exit(0);
		count = count_;
		objP = new Point[count];

		for (int i = 0; i < count; i++)
		{
			objP[i].setPoint(rand() % 10, rand() % 10);
		}
	}

	void showFigure() {
			
		for (int i = 0; i < count; i++)
		{
			objP[i].Print();
			cout << endl;
		}
	}

	~Figure() {
		if (objP != NULL) delete[] objP;
	}
	

};

//class A {
//public:
//
//
//	class B {
//	public:
//		B(double num2_) { num2 = num2_};
//		void Print() {
//
//		}
//		double getNum2() {
//			return num2;
//		}
//	private:
//		double num2;
//	};
//
//
////private:
//	int num;
//	B* obj;
//};

int main() {
	srand(time(NULL));

	Figure f1;
	f1.createFigure(4);
	f1.showFigure();

	//A myobj;

	//myobj.obj->Print();
	//myobj.obj->getNum2();

	return 0;
}