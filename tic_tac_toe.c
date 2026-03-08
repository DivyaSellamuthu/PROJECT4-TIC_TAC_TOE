#include<stdio.h>
#include"tictactoe.h"

/*PURPOSE: To initialise the array with 3x3 matrix or grid*/
void intialize(char board[3][3]){
    char count='1';
    printf(RED"+-------+-------+-------+\n"RESET);
    for(int i=0;i<3;i++){
        printf(RED"|       |       |       |\n"RESET);
        for(int j=0;j<3;j++){
            board[i][j]=count;
            count+=1;
            printf(RED"|"RESET);
            printf("   %c   ",board[i][j]);
        }
        printf(RED"|\n"RESET);
        printf(RED"|       |       |       |\n"RESET);
        printf(RED"+-------+-------+-------+\n"RESET);
    }
}

/*PURPOSE: To print the pos and the changes done in the board*/
void printboard(char Board[3][3])
{
   printf(BLUE"+-------+-------+-------+\n"RESET);
    for(int i=0;i<3;i++){
        printf(BLUE"|       |       |       |\n"RESET);
        for(int j=0;j<3;j++){
            printf(BLUE"|"RESET);
            printf(YELLOW"   %c   "RESET,Board[i][j]);
            }
            
        printf(BLUE"|\n"RESET);
        printf(BLUE"|       |       |       |\n"RESET);
        printf(BLUE"+-------+-------+-------+\n"RESET);
    }
}


/*PURPOSE: To analyse the pos moved by the user whether it is already Filled or not */
int count=1;
int makemove(char board[3][3],char pos,int ch,int ch1)
{
    int pos_char=(pos-'0');
    int row=(pos_char-1)/3;
    int column=(pos_char-1)%3;
    if((row<3)&&(column<3)){
        if(board[row][column]==pos){
            if(count%2!=0){
                
                board[row][column]=ch;
                count++;
                return 1;
            }
            else{
                board[row][column]=ch1;
                count++;
                return 1;
            }
        }
        else{
            printf("The position is already filled!");
            return 0;
        }
    }
    else{ 
        printf("Entered Position is out of range\n");
        return 0;
    }
}

/*PURPOSE: To check which player won or match draw after every move */
int flag=0;
void checkwin(char board[3][3],char pos,char str1[50],char str2[50],char ch,char ch1){
    
    if(flag==0)
    {
        int pos_char=(pos-'0');
        int row=(pos_char-1)/3;
        int column=(pos_char-1)%3;
        for (int i = 0; i < 3; i++) {
            if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
                 flag=1;
                 if(board[i][0]==ch){
                    printf(" %s won (row %d)\n", str1, i + 1);
                 }
                 else{
                    printf(" %s won (row %d)\n", str2, i + 1);
                 }
            return;
        }
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            if(board[0][i]==ch){
                printf(" %s won (column %d)\n", str1, i + 1);
            }
            else{
                printf(YELLOW RESET " %s won (column %d)\n", str2, i + 1);
            }
             flag=1;
            return;
        }
    }
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        if(board[0][0]==ch){
            printf(" %s won (main diagonal)\n", str1);
        }
        else{
            printf(" %s won (main diagonal)\n", str2);
        }
         flag=1;
        return;
    }

    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        if(board[0][2]==ch){
            printf(" %s won (reverse diagonal)\n", str1);
        }
        else{
            printf(" %s won (reverse diagonal)\n", str2);
        }
         flag=1;
        return;
    }
        
    }
    if((flag==0)&&(count==10)){
        flag=1;
        printf("It's a draw!\n");
   
    }
    


}
   
