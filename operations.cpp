#include <iostream>
using namespace std;

int main() {
	int x=0,y=0,s=0,sub=0,m=0;
	float d=0.0,mod=0.0;
	printf("enter any two numbers \n");
	scanf("%d%d",&x,&y);
	s=x+y;
	sub=x-y;
	m=x*y;
	d=x/y;
	mod=x%y;
	printf("sum=%d\n",s);
	printf("subtraction=%d\n",sub);
	printf("multiplication=%d\n",m);
	printf("division=%f\n",d);
	printf("modulus=%f\n",mod);
	return 0;
}
