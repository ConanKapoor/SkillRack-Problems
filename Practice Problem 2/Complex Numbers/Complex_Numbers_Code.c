#include <stdio.h>
#include <complex.h>
double complex addition(double complex a,complex b);
double complex subtract(double complex a,complex b);
double complex multiply(double complex a,complex b);
int main()
{
	int R,Im,R1,Im1;
	double complex A,B;
	scanf("\n%d",&R);
	scanf("\n%d",&Im);
	scanf("\n%d",&R1);
	scanf("\n%d",&Im1);

	A=R+Im*I;
	B=R1+Im1*I;

	double complex x=addition(A,B);
	double complex y=subtract(A,B);
	double complex z=multiply(A,B);
	if((int)cimag(x)==1)
		printf("%.0lf+i\n",creal(x));
	else if((int)cimag(x)==-1)
		printf("%.0lf-i\n",creal(x));
	else
		printf("%.0lf%+.0lfi\n",creal(x),cimag(x));
	if((int)cimag(y)==1)
		printf("%.0lf+i\n",creal(y));
	else if((int)cimag(y)==-1)
		printf("%.0lf-i\n",creal(y));
	else
		printf("%.0lf%+.0lfi\n",creal(y),cimag(y));
	if((int)cimag(z)==1)
		printf("%.0lf+i\n",creal(z));
	else if((int)cimag(z)==-1)
		printf("%.0lf-i\n",creal(z));
	else
		printf("%.0lf%+.0lfi",creal(z),cimag(z));
	return 0;
}
double complex addition(double complex A,double complex B)
{
	double complex i=A+B;
	return i;
}
double complex subtract(double complex A,double complex B)
{
	double complex i=A-B;
	return i;
}
double complex multiply(double complex A,double complex B)
{
	double complex i=A*B;
	return i;
}
