#include <stdio.h>
#include <string.h>
  
void func(const char * const str) {
    char buffer[64];
    
    strncpy(buffer, str, sizeof(buffer));
    buffer[sizeof(buffer)] = '\0';
    printf("%s", buffer); // needs \n in print string
}

// #include <stdio.h>: This line is needed to run the line of code that starts with printf.