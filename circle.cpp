#include <iostream>
using namespace std;

int main() {
	int r=0,d=0;
	float c=0.0,a=0.0;
	printf("enter radius of circle\n");
	scanf("%d%d",&r);
	d=2*r;
	a=3.14*r*r;
	c=2*3.14*r;
	printf("the diameter of circle=%d\n",d);
	printf("the area of circle=%f\n",a);
	printf("the circumference of circle=%f\n",c);

    return 0;
}
