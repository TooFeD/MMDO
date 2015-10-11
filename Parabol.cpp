//#include "stdafx.h"
#include <math.h>
#include <stdio.h>
//#include <conio.h>
#include <iostream>
#include <cmath>
//
using namespace std;
 
int main(void)
{
	
	double h=0.01,a=1,b=2,x0=0,x1=0,x2=0,xx;
	double e=0.0001,f0,f1,f2,fx,x3,f3;
	bool flag;
	x0=1.0; x2=1.00008; x1=x0/x2; //vdala triyka
	
	f0=pow(x0,4.0)+(4*pow(x0,3.0))+(3*x0*x0)-(36*x0)+45;
	f1=pow(x1,4.0)+(4*pow(x1,3.0))+(3*x1*x1)-(36*x1)+45;
	f2=pow(x2,4.0)+(4*pow(x2,3.0))+(3*x2*x2)-(36*x2)+45;
	
	do{
		xx=(x0 + x1)/2 + ((f1 - f0)*(x2 - x0)*(x2 - x1))/(2*((f1 - f0)*(x2 - x0) - (f2 - f0)*(x1 - x0)));	
		fx=pow(xx,4.0)+(4*pow(xx,3.0))-(3*xx*xx)-(36*xx)+45;
		if (abs(x1-xx)>=e && abs(x2-xx)>=e){
			flag=false;
				if (xx<x1){
				x3=x2;
				f3=f2;
				x2=x1;
				f2=f1;
				x1=xx;
				f1=fx;
				}
				else if (xx>x1){
				x3=x2;
				f3=f2;
				x2=xx;
				f2=fx;
				}
			if (f1>f2){
			x0=x1;
			f0=f1;
			x1=x2;
			f1=f2;
			x2=x3;
			f2=f3;
				}
		}
		else flag=true;
	}
	while (flag!=true);
		xx=(x0 + x1)/2 + ((f1 - f0)*(x2 - x0)*(x2 - x1))/(2*((f1 - f0)*(x2 - x0) - (f2 - f0)*(x1 - x0)));	
		fx=pow(xx,4.0)+(4*pow(xx,3.0))-(3*xx*xx)-(36*xx)+45;
		cout<<xx<<"\t"<<fx;
		
	system("pause");
}
