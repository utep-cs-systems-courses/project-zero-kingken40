#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('#');
    putchar('\n');
  }
}

// Prints an arrow.
void print_arrow(int size)
{
  for (int row = 0; row < size; row++) {
    for (int col = 0; col < row; col++) putchar(' ');
    for (int k = 0; k < row; k++) putchar('*');
    putchar('\n');
  }  
  for (int row = 0; row < size; row++) {
    for (int col = 0; col < size - row; col++) putchar(' ');
    for (int k = 0; k < size - row; k++) pt char('*');
    putchar('\n');
  }
}


// Prints an arrow.

void print_arrow(int size)
{
  for (int row = 1; row < size; row++) {  
    for (int col = 0; col < row; col++) putchar(' ');
    for (int k = 0; k < row; k++){
      putchar('*');
    }
    putchar('\n');    
  }
  
  for (int row = 0; row<size;row++){
    for (int col = 0; col < size-row;col++) putchar(' ');
    for(int k = 0; k<size-row; k++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('#');
    putchar('\n');
  }
}

void print_arrow2(int leftCol, int tsize, int size)
{
  int i, j;
  int endCol = leftCol + size;
<<<<<<< HEAD
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
=======
  for (int row = 6; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('#');
>>>>>>> 0ac7c886edcc63cea2a0402ea90ae70eae6d092d
  }
  for (int row = 0; row <= tsize; row++) {
    int minCol = leftCol + tsize - row, maxCol = leftCol + tsize + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
<<<<<<< HEAD
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}
=======
    for (       ; col <= maxCol; col++) putchar('#');
    putchar('\n');
  }
}


>>>>>>> 0ac7c886edcc63cea2a0402ea90ae70eae6d092d
