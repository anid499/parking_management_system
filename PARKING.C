#include<stdio.h>
#include<conio.h>
int max_frwhl=40, max_twhl=20,fnumber[100],tnumber[100];
int nof=0,not=0,sale=0,i=0,j=0;
void Four_wheeler(){
  if(nof<max_frwhl){
	printf("\nEnter number: ");
	scanf("%d",&fnumber[i++]);
	nof++;
	sale+=50;
  }
  printf("Entered successfully.\nThank You.\n");
}
void Two_wheeler(){
  if(not<max_twhl){
	printf("\nEnter number: ");
	scanf("%d",&tnumber[j++]);
	not++;
	sale+=20;
  }
  printf("Entered successfully.\nThank You.\n");
}
void Show_status(){
  printf("\nMax four-wheeler capacity : %d.",max_frwhl);
  printf("\nMax two-wheeler capacity: %d.",max_twhl);
  printf("\n\nCurrent Status - ");
  printf("\n\tFour-wheeler : %d.",nof);
  printf("\n\tTwo-wheeler : %d.",not);
  printf("\n\nRemaining Capacity - ");
  printf("\n\tFour-wheeler : %d.",max_frwhl-nof);
  printf("\n\tTwo-wheeler : %d.",max_twhl-not);
}
void Show_sale(){
  printf("\n\nToday's total sale : %d.",sale);
  printf("\n-- %d four wheelers & %d two wheelers--\n",nof,not);
}
void Other(){
  int c,k;
  printf("\n\n1. Show complete status.");
  printf("\n2. Show total sale.");
  printf("\n3. Show cars details.");
  printf("\n\nEnter choice : ");
  scanf("%d",&c);
  switch(c){
	case 1: Show_status();
		break;
	case 2: Show_sale();
		break;
	case 3: printf("\nFour wheelers -\n");
		for(k=0;k<i;k++)
			printf("%d\t",fnumber[k]);

		printf("\n\nTwo wheelers -\n");
		for(k=0;k<j;k++)
			printf("%d\t",tnumber[k]);

		break;
	default: printf("Invalid Input.\n");
		break;
  }
}
void Delete(){
  int c;
  printf("\n\n1. Four wheeler");
  printf("\n2. Two wheeler");
  printf("\n\nEnter choice: ");
  scanf("%d",&c);
  switch(c){
	case 1: nof--;
		break;
	case 2: not--;
		break;
	default: printf("\nInvalid Input.\n");
		break;
  }
}
int Menu(){
	int ch;
	printf("\n1. 4-wheeler Entry");
	printf("\n2. 2-wheeler Entry");
	printf("\n3. Delete Entry");
	printf("\n4. Other details");
	printf("\n5. Exit");
	printf("\n\nEnter choice: ");
	scanf("%d",&ch);
	return(ch);
}
void main(){

	while(1){
		clrscr();
		printf("** 4-wheeler: 50 rs || 2-wheeler: 20 rs **\n");
		printf("-------------------------------------------\n\n");
		switch(Menu()){
			case 1:   Four_wheeler();
				  break;
			case 2:   Two_wheeler();
				  break;
			case 3:   Delete();
				  break;
			case 4:   Other();
				  break;
			case 5:   exit(0);

			default:  printf("\nWrong Input.");
				  break;
		}
		getch();
	}
}