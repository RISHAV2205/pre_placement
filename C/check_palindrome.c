#include <stdio.h>
#include <string.h>
int isPalindrome(char s[]){
    int length = strlen(s);
    char reversed[length + 1];
    for (int i = 0; i < length; i++) {
        reversed[i] = s[length - i - 1];
    }
    reversed[length] = '\0';
    return strcmp(s, reversed) == 0 ? 1 : 0;
}
int main(){
    char s[] = "abba";
    printf("%d\n", isPalindrome(s));
    return 0;
}
