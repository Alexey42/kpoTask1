#include <iostream>
#include <vector>
#include <time.h>
#include "Header.h"

using namespace std;

void main() {
	srand(time(NULL));
	vector<Ellipse> v;
	double all_ellipses_area = 0, all_circles_area = 0;
	int len = rand()% 50;

	for (int i = 0; i < len; i++) {

		if (rand() % 2 == 0) {
			v.push_back(Circle(rand()% 10));
			all_circles_area += v.back().GetArea();
		}
		else {
			v.push_back(Ellipse(rand()%10, rand()%10));
			all_ellipses_area += v.back().GetArea();
		}

		double area = v.back().GetArea();
		
		for (int j = i - 1; j >= 0; j--)
			if (area < v.at(j).GetArea())
				swap(v[j], v[j + 1]);
			else break;
	}

	cout << "Area of all ellipses: " << all_circles_area << ", Area of all circles:" << all_ellipses_area << endl << endl;
	cout << "Sorted vector: \n";
	for (int i = 0; i < v.size(); i++) cout << v[i].GetArea() << " \n";

	system("pause");
}