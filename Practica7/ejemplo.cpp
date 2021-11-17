#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

struct Point2d{
	float x=0, y=0;
	void set (int max){
		x=rand()%(max+1);
		y=rand()%(max+1);
		}
	float dist(Point2d b){
		return sqrt((x-b.x)*(x-b.x)+ (y-b.y)(y-b.y));
		}
	};

int main(){
	Point2d p1, p2;
	p1.set(100);
	p2.set(100);
	cout<<p1.dist(p2)<<endl;

    system("pause");
}

