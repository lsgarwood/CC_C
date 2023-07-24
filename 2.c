#include <stdio.h>
#include <string.h>
  
void func(const char * const str) {
    char buffer[64]; // char wrong type?
    
    strncpy(buffer, str, sizeof(buffer));
    buffer[sizeof(buffer)] = '\0';
    printf("%s", buffer); // %s is not a valid optional should be char %c
}

// #include <stdio.h>: This line is needed to run the printf.