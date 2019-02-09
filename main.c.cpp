#include <stdlib.h>
#include <stdio.h>


int main(void) {
	
	int operation, repeat = 0;
	do{																		//do while for repeating the program begins here
	
	printf("Please press,\n1 to Add\n2 for Multiplication\n3 to Quit\n");   //intital greeting
	
		scanf("%d",&operation);
		int numerator1, numerator2, denominator1, denominator2,newNum1, newNum2, newDen, finalNum; //declaring variables
		
	
while(operation < 1 || operation > 3) {
	printf("Invalid selection. Please press,\n1 to Add\n2 for Multiplication\n3 to Quit\n");  //prompts if selection is invalid
		scanf("%d",&operation); }
		
		
		if (operation == 1){                                 //if statement if user selects 1 (addition) at greeting.
		
		
			do {
			printf("Enter your first numerator\n");          // prompting first numerator
			scanf("%d", &numerator1);}
			while (numerator1 < 0);
			
		
		do{
		printf("Enter your first denominator\n");			// prompting first denominator
		scanf("%d",&denominator1);}
		while(denominator1 < 1);
			do {
			printf("Enter your second numerator\n");		// prompting for second numerator
			scanf("%d", &numerator2);}
			while (numerator2 < 0);
			
		
		do{
		printf("Enter your second denominator\n");			// prompting for second denominator
		scanf("%d",&denominator2);}
		while(denominator2 < 1);
		if (denominator1==denominator2){					// enters if denominators are equal
			printf("The answer is ");
			printf("%d", numerator1+numerator2);
			printf("/");
			printf("%d", denominator1);
			
		}
		if (denominator1 != denominator2){					//enters if statement if denominators are not equal
			newNum1 = denominator1 * numerator2;
			newNum2 = numerator1 * denominator2;
			newDen = denominator1*denominator2;
			finalNum = newNum1 + newNum2;
			printf("The answer is ");
			printf("%d",finalNum);
			printf("/");
			printf("%d", newDen);
		}do{
		
		printf("\nPress 1 to repeat or 2 to quit.\n");
		scanf("%d",&repeat);}
		while(repeat <1 || repeat >2);
		}
		if (operation == 2){							//skips to this if statement if user selected 2 (multiplication) at greeting
				do {
			printf("Enter your first numerator\n");
			scanf("%d", &numerator1);}
			while (numerator1 < 0);
			
		
		do{
		printf("Enter your first denominator\n");
		scanf("%d",&denominator1);}
		while(denominator1 < 1);
			do {
			printf("Enter your second numerator\n");
			scanf("%d", &numerator2);}
			while (numerator2 < 0);
			
		
		do{
		printf("Enter your second denominator\n");
		scanf("%d",&denominator2);}
		while(denominator2 < 1);
		newNum1= numerator1 * numerator2;				
		newDen = denominator1 * denominator2;
			printf("The answer is ");				
			printf("%d",newNum1);
			printf("/");
			printf("%d", newDen);
			do{
			
			printf("\nPress 1 to repeat or 2 to quit.\n");
		scanf("%d",&repeat);
	}while(repeat<1 ||repeat >2);
		}
		
	}
	while(repeat==1);
		if(operation == 3){						//skips to this if statement if user selected 3 (quit) at greeting.
		exit(0);
		
		}
		
	return 0;
}
