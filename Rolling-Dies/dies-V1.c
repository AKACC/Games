/*/*
== Play System ==

Author	: Zixian Ou
Date	: Nov 16th 2016
Student Number: 125421164
Matrix Account: zou2
Seneca Email: zou2@myseneca.ca
Version: #1

*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void show(int dies[],int num);
int main()
{
   int num ;//number of dies
   int dies[20];
   srand(time(NULL));
   printf("Please enter number of dies: ");
   scanf("%d",&num);
   show(dies,num);
   return 0;
}
void show(int dies[], int num){
   for(int i=0;i< num ;i++){
      rand();
      dies[i] = rand()%6+1;
   }
	char c= ' ';
	//line1
    for(int j = 0; j<num ;j++){
 	   printf("%d ",dies[j]);

   }
   //line2
   printf("\n");
   for(int j = 0; j<num ;j++){
 	  	printf("+---------+%5c",c);
   }
   //line3
   printf("\n");
   for(int j = 0; j<num ;j++){
   	if(dies[j] == 1){
   		printf("|         |%5c",c);
   	}
   	if(dies[j] == 2 || dies[j] == 3){
   		printf("|       * |%5c",c);
   	}
   	if(dies[j] == 4 || dies[j] == 5 || dies[j] == 6){
   		printf("| *     * |%5c",c);
   	}
   }
   //line4
   printf("\n");
   for(int j = 0; j<num ;j++){
   	if(dies[j] == 2 || dies[j] == 4){
   		printf("|         |%5c",c);
   	}
   	if(dies[j] == 1 || dies[j] == 3 || dies[j] == 5){
   		printf("|    *    |%5c",c);
   	}
   	if(dies[j] == 6){
   	   printf("| *     * |%5c",c);
   	}
   }
   //line5
   printf("\n");
   for(int j = 0; j<num ;j++){
   	if(dies[j] == 1){
   	   printf("|         |%5c",c);
   	}
   	if(dies[j] == 2 || dies[j] == 3){
   	   printf("| *       |%5c",c);
      }
   	if(dies[j] == 4 || dies[j] == 5 || dies[j] == 6){
   	   printf("| *     * |%5c",c);
    	}
   }
   //line6
   printf("\n");
   for(int j = 0; j<num ;j++){
   	printf("+---------+%5c",c);
   }
}
