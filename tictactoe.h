#ifndef TICTACTOE_H
#define TICTACTOE_H
/*MACROS FOR MAKING THE COLOURFULL GRID*/
#define RED   "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

/*All user defined function prototype*/
void intialize(char board[][3]);
void printboard(char board[][3]);
int makemove(char board[3][3],/*int row,int column*/char pos,int ch,int ch1);
void checkwin(char board[3][3],/*int row,int column*/char pos,char [],char [],char,char);

#endif
