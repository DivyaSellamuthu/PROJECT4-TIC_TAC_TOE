#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include"tictactoe.h"
int main()
{
   /*for(int i=1;i<=99;i++){
      printf("\r Loading (%d%%)",i);
      fflush(stdout);
      usleep(75000);
   }
   //printf("\n");
   sleep(1);
   printf("\r Loading 100");
   fflush(stdout);
   sleep(1);*/
   extern int count,flag;
   char arr[3][3];
   char str1[50],str2[50];
   char ch,ch1;
   int flag1;
   printf("\rEnter player 1's name: ");
   //getchar();
   scanf(" %49[^\n]",str1);
   printf("Enter player 2's name: ");
  // getchar();
   scanf(" %49[^\n]",str2);
   //getchar();
   do{
      printf("Choose 'X' or 'O' : ");
      scanf(" %c",&ch);
      flag1=0;
      if((ch=='X')||(ch=='x')){
         flag1=1;
         ch='X',
         ch1='O';
      }
      else if((ch=='O')||(ch=='o')){
         flag1=1;
         ch='O';
         ch1='X';
      }
      else{
         printf("You have entered the wrong option!\n\n");
        // flag1=0;
      }
   }while(flag1==0);
   intialize(arr);
      while((flag==0)){
         char pos;//row,column;
         if(count%2==0){
            printf(" %s turn\n",str2);
         }
         else{
            printf(" %s turn\n",str1);
         }
         printf("Enter the position : ");
         scanf(" %c",&pos);
         //scanf("%d %d",&row,&column);
         if(makemove(arr,/*row,column*/pos,ch,ch1)){
            printboard(arr);
            checkwin(arr,pos/*row,column*/,str1,str2,ch,ch1);
         }
      }
      
   return 0;
}