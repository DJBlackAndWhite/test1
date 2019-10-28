#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Obliczenie funkcji kwadratowej //
int main()
	{
	float a,b,c,d,x1,x2;
	 	printf("Podaj wartosci wspolczynnikow rownania kwadratowego\n");
	 	printf("a=");
	 	scanf("%f",&a);
	 	printf("b=");
	 	scanf("%f",&b);
	 	printf("c=");
	 	scanf("%f",&c);
			if (a==0)
				{
					printf("To nie jest rownanie kwadratowe!\n");
					return 1;
				}
			else
				{
					//Obliczenie Delty
					d=b*b-4*a*c;
					if (d>0)
						{
							x1=(-b-sqrt(d))/(2*a);
							x2=(-b+sqrt(d))/(2*a);
							printf("Rownanie ma dwa pierwiastki rzeczywiste x1=%.2f x2=%.2f\n",x1,x2);
						}
					else if (d==0)
						{
							x1=-b/(2*a);
							printf("Rownanie ma jeden pierwiastek podwojny x1=x2=%.2f\n",x1);
						}
					else // d < 0 //
						{
							printf("Rownanie nie ma pierwiastkow rzeczywistych\n",x1);
						}
			   }
			 }
