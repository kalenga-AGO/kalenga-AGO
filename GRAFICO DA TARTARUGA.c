#include <stdio.h>
#include <stdlib.h>
#define LINHA 30
#define COLUNA 30

// prototype
void point(char cima[LINHA][COLUNA], int *up, int * donw);
void initialize(char array[LINHA][COLUNA]);
void printarray(const char array[LINHA][COLUNA]);
void up(int * up);
void left(int * left);
void donw(int * donw);
void right(int * right);

int main (void)
{
	int input; // variable to control of game
	input = 0; // initialize

	char space[LINHA][COLUNA];
	initialize(space); // initialize array of space with 0

	static int moveup = LINHA - 1;
	static int moveleft = 0;

	scanf("%d", &input);

	while(input != 9){
		
	if(input == 5){
		// move up
		printf("%s", "\a");
		point(space, &moveup, &moveleft);
	}
	if(input == 0){
		// output array
		printf("%s", "\a");
		printarray(space);
	}
	if(input == 8){
		up(&moveup);
	}
	if(input == 6){
		// move left
		left(&moveleft);
	}
	if(input == 4){
		right(&moveleft);
	}
	if(input == 2){
		donw(&moveup);
	}

		scanf("%d", &input);
	}
}

void point(char point[LINHA][COLUNA], int * up, int *left)
{
	point[*up][*left] = '+';
}

void up( int * const up)
{
	(*up)--;
}

void left(int * left)
{
	(*left)++;
}

void right(int * right)
{
	(*right)--;
}

void donw(int * donw)
{
	(*donw)++;
}

void initialize(char array[LINHA][COLUNA])
{
	size_t i; // counter to row
	i = 0; // initilize
	size_t j; // counter to column

	// loop to initialize array with 0
	while(i < LINHA){
		j = 0; // initialize
	while(j < COLUNA){
			
		array[i][j] = '0';
	++j;
	}	
	++i;
	}
}

void printarray (const char array[LINHA][COLUNA])
{
	size_t i; // counter to row
	i = 0;
	size_t j; // counter

	// loop to output array
	while(i < LINHA){
		j = 0; // initialize
	
	while(j < COLUNA){
				
		printf("%c ", array[i][j]);
	
	++j;
	if(j % COLUNA == 0){
		puts("");
	}
	}
	++i;
	}
}

