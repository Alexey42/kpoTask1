#include <cstdio>

using namespace std;

class Ellipse {
protected:
	double axisX; 
	double axisY;

public:
	Ellipse() : axisX(0), axisY(0) { }

	Ellipse(double x, double y) {
		if (x < 0 || y < 0) throw "";
		else {
			axisX = x;
			axisY = y;
		}
	}

	double getX() {
		return axisX;
	}

	double getY() {
		return axisY;
	}

	void setX(double x) {
		if (x < 0) throw "";
		else axisX = x;
	}

	void setY(double y) {
		if (y < 0) throw "";
		else axisY = y;
	}

	virtual double GetArea() {
		return axisX * axisY * 3.141592;
	}

};


class Circle : public Ellipse {
public:
	Circle() {
		axisX = axisY = 0;
	}

	Circle(double r) {
		if (r < 0) throw "";
		else axisX = axisY = r;
	}

	double getRadius() {
		return axisX;
	}

	void setRadius(double r) {
		if (r < 0) throw "";
		else axisX = axisY = r;
	}

	operator Ellipse() { return Ellipse(axisX, axisY); }

};