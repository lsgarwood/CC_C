#include <stdio.h>
 
int main() {
  // output a line
  printf("Hello World!\n");

  printf("Hello\nWorld!");
    // prints 
    // Hello
    // World!

    printf("\n2/3 Cups: Granulated Sugar");
    // \n at front makes sure print statement is on new line

    // If you want to create a comment with a beginning and end, you can use /* to begin the comment and */ to end the comment
    /* The following output will be
    an outburst from my dog in a 
    moment of pure joy after seeing 
    another dog across the street. */
    printf("Woof!");
}

// #include <stdio.h>: This line is needed to run the line of code that starts with printf.
// int main(){ }: This is the starting point of the code. All the code inside the curly braces {} runs first.
// output a line: This is a comment
// printf("Hello World!");: This line of code prints, or outputs, the text “Hello World!” to the console.
// \n : This is called an escape sequence and is used to add a non-visual character within a string

// Another escape sequence is \t. This is equivalent to the tab key and will insert spaces within a string:
// printf("Hello\tWorld!");
// The above code will output:
// Hello     World!

// When this code is run the following text is displayed in the terminal.

// Hello World!

// Synytax

// All statements, like the printf() statement, need to end with a semicolon
// case sensitive
// errors will show as follows: 
// script.c: In function ‘main’:
// script.c:6:1: error: expected ‘;’ before ‘}’ token
// }
// ^