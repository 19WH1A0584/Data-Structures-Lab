#include<stdio.h>
struct complex
{
	int real,imag;
};
struct complex add(struct complex c1, struct complex c2)
{
	struct complex c3;
	c3.real = c1.real +c2.real;
	c3.imag = c1.imag+c2.imag;
	printf("addition = %d+i%d\n", c3.real, c3.imag);
}
struct complex sub(struct complex c1, struct complex c2)
{
	struct complex c3;
	c3.real = c1.real -c2.real;
	c3.imag = c1.imag-c2.imag;
	printf("subtraction = %d-i%d\n", c3.real, c3.imag);
}
struct complex mult(struct complex c1, struct complex c2)
{
	struct complex c3;
	c3.real = c1.real*c2.real - c1.imag*c2.imag;
	c3.imag = c1.imag*c2.real + c1.real*c2.imag;

	printf("multiplication =%d+i%d\n",c3.real, c3.imag);
}
int main()
{
	struct complex c1,c2;
	scanf("%d%d",&c1.real,&c1.imag);
	scanf("%d%d",&c2.real,&c2.imag);
	add(c1,c2);
	sub(c1,c2);
	mult(c1,c2);
}
