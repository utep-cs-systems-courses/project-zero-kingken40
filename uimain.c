#include <stdio.h>
#include "draw.h"

int main() 
{
  puts("Welcome!");

  while (1) { // Infinite while loop

<<<<<<< HEAD
    fputs("Select which shape you want to print (Triangle = t, Square = s, Arrow = a, Chars = c, Arrow2 = b) or 'q' to quit\n> ", stdout);
=======
    fputs("Select which shape you want to print (Triangle = t, Square = s, Arrow = a, Chars = c) or 'q' to quit\n> ", stdout);
>>>>>>> 0ac7c886edcc63cea2a0402ea90ae70eae6d092d
    fflush(stdout);		/* stdout only flushes automatically on \n */
    int c;
    while ((c = getchar()) == '\n'); /* ignore newlines */
    if (c == EOF)		     /* terminate on end-of-file */
      goto done;

    // Given the user answer, select which method to call
    switch (c) {
    case 't':
      puts("You selected triangle:");
      print_triangle(5, 7);
      break;
    case 's':
      puts("You selected square:");
      print_square(5, 5);
      break;
    case 'a':
      puts("You selected arrow:");
      print_arrow(5);
      break;
    case 'b':
      puts("You selected arrow2:");
      print_arrow2(5, 7, 5);
      break;
    case 'c':
      puts("You selected chars:");
      for (char c = 'A'; c < 'D'; c++)
	print_char_8x12(c);
<<<<<<< HEAD
      break;
    case 'a':
      puts("You selected arrow:");
      print_arrow(5);
      break;
    case 'b':
      puts("You selected arrow2:");
      print_arrow2(5,7,5);
=======
>>>>>>> 0ac7c886edcc63cea2a0402ea90ae70eae6d092d
      break;
    case 'q':
      puts("Bye!");
      goto done; 		/* terminate */
    case '\n':
      break;
    default:
      printf("Unrecognized option '%c', please try again!\n", c);
    }
  }

 done: // To exit from program
  return 0;
}
