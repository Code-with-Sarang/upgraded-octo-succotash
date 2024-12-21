#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
void reverseString(char str[]) {
 int top = -1;
 char stack[MAX_SIZE];
 int length = strlen(str);

 // Push all characters of the string onto the stack
 for (int i = 0; i < length; i++) {
 stack[++top] = str[i];
 }
 // Pop all characters and print the reversed string
 for (int i = 0; i < length; i++) {
 printf("%c", stack[top--]);
 }
}
int main() {
 char str[] = "HALLO";
 reverseString(str);
 return 0;
}