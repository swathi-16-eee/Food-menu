#include<stdio.h>
main()
{
	int choice;
	printf("\n1.French Fries\n2.Burger\n3.Sandwich\n4.Pasta\n5.Pizza\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{ 
	    case 1:
	  	  printf("Food item-French Fries\nPrice-Rs 99");
	  	break;
	  	case 2:
	  	  printf("Food item-Burger\nPrice-Rs 129");
	  	break;
	  	case 3:
	  	  printf("Food item-Sandwich\nPrice-Rs 149 ");
	  	break;
	  	case 4:
	  	  printf("Food item-Pasta\nPrice-Rs 179");
	  	break;
	  	case 5:
	  	  printf("Food item-Pizza\nPrice-Rs 239");
	  	break;
	  	default:
	  	  printf("Wrong choice, please see the list");
	}
}
