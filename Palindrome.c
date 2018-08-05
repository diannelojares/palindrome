/* Dianne Lojares
		BSCS 4A
			*/

//If there is an error: [Error] ld returned 1 exit status;; compile lang po. nagrrun po ito :D


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
   char a[100], b[100];
   int num = 0;
   
   loop:
   printf("How Many Input Do you Want?:  ");
   scanf("%d",&num);
   
    
	int x;
	
	for (x = 0; x < num ; x++)
	{
		
		printf("Enter a string to check if it is a palindrome:  ");
		scanf("%s",a);
		
		FILE * fp;
		fp = fopen("file.txt","a+");

 
  		 strcpy(b,a);
  		 strrev(b);
 
  		if (strcmp(a,b) == 0)
  		{
  		 	printf("Entered string is a palindrome.\n\n");
  		 	fputs(a, fp);
  		 	fputs("\n", fp);	
		}	 
  		 else
    		  printf("Entered string isn't a palindrome.\n\n");
    		  
	}
	
	char yes;
	
	printf("Do you want to Continue? [Y/N] ");
	scanf("%s",&yes);
	
	if(yes == 'y')
	{
		system("cls");
		goto loop;
	}
	else if (yes == 'n')
	{
		printf("End of the program....\n\nDianne Rose C. Lojares \nBSCS 4A \nAugust 4, 2018");
		exit(0);
	}
	
	
   
   
   return 0;
 
   
   	
}
   
