/*
int	    a whole number	-2,147,483,648 to 2,147,483,647
float	a number with possible decimals	6 decimal places
double	a number with possible decimals	15 decimal places
char	stores one character (letter or number)
*/

/*
printf()

symbol	    type
%d or %i	int
%f	        double or float
%c	        char

symbol	effect
\n	    newline
\r	    carriage return
\t	    tab
*/

#include <stdio.h>

int main() {
  
 int ageLearnedToRide = 5;


 printf("I was %i years old when I learned to ride a bike.\n", ageLearnedToRide);
 printf("I hope I still remember how to ride.");

int day = 3;
printf("Hello World, today is the %drd!", day);

}

#include <stdio.h>

int main() {
  
  int numOfBooks = 5;
  char favLetter = 'l';
  char favDigit = '7';
  double costOfCandyBar = 0.75;

  printf("Number of books: %d\n", numOfBooks);
  printf("Your Favorite Letter is: %c\n", favLetter);
  printf("Your Favorite Digit is: %c\n", favDigit);
  printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);

  /*
  output
  Number of books: 5
  Your Favorite Letter is: l
  Your Favorite Digit is: 7
  You expect to pay $0.75 for a candy bar. 
  */
}

/*When declaring a char, you need single quotes around it:

char foo = 'a';
char goo = '2';*/

/* Float and Double
A float has less precision than a double, 6 vs 15 possible decimal places respectively, and therefore takes up less memory (4 vs 8 bytes). 
However, a double run faster, so you gain speed at the cost of more memory usage
*/

/*Updating Values
Two places to set a variables value
set at declaration
and any future point in the code
*/

/*
Constants
Any basic data type in C, like those we have gone over, can be declared as a constant using the keyword const before the type. So instead of our template of type variable_name, it would be const type variable_name.

It is also a best practice to use all upper case letters when declaring a constant:
*/

#include <stdio.h>

int main() {
  
// Speed of light is 1.86e5 mi/s or 186000 mi/s we will store 1.86 and do the multiplicaiton later.
  const double SPEEDOFLIGHT = 1.86;
  int timeTraveledInSeconds = 30;

  SPEEDOFLIGHT;


  // No need to change below here
  printf("Light would travel %.2f miles in %d seconds\n", SPEEDOFLIGHT * 100000 * timeTraveledInSeconds, timeTraveledInSeconds);

}

/*
Casting types
YOU COULD NOT DO THIS 
int a;
double b = 3.0;
a = b;
There are two types of conversions, implicit and explicit
Our example above was implicit, the compiler in this case will make a best guess.
The other way to convert a variable from another type is explicitly. You can do this by simply telling the compiler what type you want to set it to. So in our example above we could change the line a = b to a = (int)b. 
That way if b was something other than 3.0, such as 3.2, we are telling the compiler to make it work, so it would set it to 3
*/

int main() {
  
  double testScore = 95.7;
  int displayScore = 0;
  displayScore = (int)testScore;

  // No need to change below here
  printf("Great work, you got a %d%% on your test\n", displayScore);

}

/*In the back-end, a char doesn’t store 'a', it stores the value representing that: 97 for lowercase and 65 for uppercase*/
int main() {
  
  char targetChar;
  int sourceInt = 99;
  double sourceDouble = 55.67;

  // Cast here
  targetChar = (char)sourceInt;
  targetChar = sourceDouble;
  // No need to change below here
  printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);

}

