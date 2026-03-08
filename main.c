/*INCLUDING ALL INBUILT STANDARD LIBRARY FILES*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include"tictactoe.h"
int main()
{ 
   /*This loop is to give loading message to enhance gaming effect*/
   for(int i=1;i<=99;i++){
      printf(RED"\r Loading (%d%%)... "RESET,i);
      fflush(stdout);
      usleep(75000);
   }
   sleep(1);
   printf(RED"\r Loading (100)... "RESET);
   fflush(stdout);
   sleep(1);

   extern int count,flag; //global variable
   char arr[3][3];//to store the player's move
   char str1[50],str2[50];//to store the player's name
   char ch,ch1;//to store x and o
   int flag1;

   printf("\rEnter player 1's name: ");
   scanf(" %49[^\n]",str1);

   printf("Enter player 2's name: ");
   scanf(" %49[^\n]",str2);
   
   /*PURPOSE: to choose the option 'X' or 'O' by the player*/
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
      }
   }while(flag1==0);

   intialize(arr);//This fun it used to initialize the arr

   /*PURPOSE: To analyse which pos the user wants to move..whether it is already filled or not*/
      while((flag==0)){
         char pos;
         if(count%2==0){
            printf(" %s turn\n",str2);
         }
         else{
            printf(" %s turn\n",str1);
         }
         printf("Enter the position : ");
         scanf(" %c",&pos);
         if(makemove(arr,pos,ch,ch1)){
            printboard(arr);
            checkwin(arr,pos,str1,str2,ch,ch1);
         }
      }
      
   return 0;
}