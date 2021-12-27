//// String Function
//#include "stdio.h"
//#include "string.h"
//
//int main(int argc, char *argv[]) {
//
//    // strlen();
//    char myString[] = {"Hello"};  // Declaring a string
//    printf("The length of myString is: %d\n", strlen(myString));  // Function to find the length of the string
//
//    // strcpy();
//    char string1[50], string2[50];
//
//    strcpy(string1, "Hello World!");    // strcpy is the equivalent of an assignment operator for strings
//    strcpy(string2, "My name is Steven.");  // strcpy(destination, "Contents of String");
//
//    // strcpy doesn't check to see if the contents will fit in the char array
//    printf("%s %s\n", string1, string2);
//
//    // strcat();
//    char firstName[8] = {"John"};    // The first string must have a size larger than the concatenated string
//    char lastName[] = {"Doe"};
//
//    printf("%s", strcat(firstName, lastName));
//
//    return 0;
//}