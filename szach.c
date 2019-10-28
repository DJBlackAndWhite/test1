#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,numy;
    int j,numx;
    // Szerokosc szachownicy
        printf("szer.: ");
        scanf("%d",&numx);
        if (numx<=0)
        {
        	printf("podaj liczbe dodatnia x\n");
        	return 1;
		}
    // Wysokosc szachownicy
    	printf("wys.: ");
        scanf("%d",&numy);
        if (numy<=0)
			{
        	printf("podaj liczbe dodatnia y\n");
        	return 1;
			}
        	for(i=0;i<numy;i++)
        	{
			         for(j=0;j<numx;j++)
				           {
            		       if((i+j)%2==0)
                		        printf("#");
            		       else printf(" ");
        					}
        printf("\n");
			}
 return 0;
}
