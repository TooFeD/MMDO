//#include "stdafx.h"
#include <math.h>
#include <stdio.h>
//#include <conio.h>
#include <iostream>
//#include <cmath>
//
using namespace std;
 
int main(void)
{
	
	int h=0.01,a=1,b=2,x0,x1,x2,xx;
	float e=0.0001,f,f1,f2,fx;
	x0=1.0;
	f1=0;
	f2=0;	//f=pow(x,4)+4*pow(x,3)-3*x*x-36*x+45;
	f1=pow(x0,4.0)+(4*pow(x0,3.0))+(3*x0*x0)-(36*x0)+45;
	//printf("%f",f1);
	
		do {
		h=h/2;
		x2=x0+h;
		f2=pow(x2,4.0)+(4*pow(x2,3.0))-(3*x2*x2)-(36*x2)+45;
		if (f1<=f2)
			{	h=-h;
				x2=x0+h;
				f2=pow(x2,4.0)+(4*pow(x2,3.0))-(3*x2*x2)-(36*x2)+45;
			}
		//cout<<"\n"<<f2;
		}  while (f1<f2 || abs(h)>e);

		if (abs(h)>e){
			do{	x1=x2;
		f1=f2;
		x2=x1+h;
		f2=pow(x2,4.0)+(4*pow(x2,3.0))-(3*x2*x2)-(36*x2)+45;
			}while(f1>=f2);
				if (h>0) 
				{
				a=x1-h;
				b=x2;}
				else {
					a=x2;
					b=x1-h;
					}
			cout<<a<<"\t"<<b;
		}
		else
		{xx=x0;
		fx=pow(xx,4.0)+(4*pow(xx,3.0))-(3*xx*xx)-(36*xx)+45;
		cout<<xx<<"\t"<<fx;
		
		}
cout<<"\n";
	system("pause");
}

