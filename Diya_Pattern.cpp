#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h> 

void changeColor(int desiredColor){ 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
} 

int main()
{
    int k=0,i,j;
    for(i=8;i>0;i--)
    {
    	 changeColor(06);
        for(j=0;j<i;j++)
            printf(" ");
        for(j=0;j<(2*k)-1;j++)
            printf("*");
        k++;
        printf("\n");
    }
    k=6;
    for(i=1;i<8;i++)
    {
    	 changeColor(06);
        for(j=0;j<i;j++)
            printf(" ");
        for(j=0;j<=(2*k)-1;j++)
            printf("*");
        k--;
        printf("\n");
    }
    k=15;
    for(i=0;i<12;i++)
    {
    	    changeColor(12); // Change the color to red. 
        for(j=0;j<7+i;j++)
            printf(" ");
        for(j=0;j<=(2*k)-1;j++)
            printf("&");
        k--;
        printf("\n");
    }
 changeColor(7); 
} 
