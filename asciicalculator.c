#include <stdio.h>
#include<conio.h>
int main()
{
 printf("\n\n\t\t\t\tWhat do you want to do!!");

 printf("\n\n\t\t1)If you want to convert number to ASCII code than type '1'\n ");
 printf("\n\n\t\t2)If you want to convert ascii code to number than type '2'\n");

 int i;
 char z;
 int choise;
 scanf("%d", &choise);
 while(1){
 
 if(choise==1){
    printf("\tEnter your number 1 to infinite: ");
    scanf("%d", &i);
    printf("\tYour ascii code is: \n\t%d = %c\n", i, i);
    
 }
 else if(choise==2)

	{
	
    printf("\tEnter your ascii code: \n");
    scanf("%c", &z);
    printf("\n\tYour number is: \n\t%c= %d\n", z, z);
   

}
}
getch();

}
