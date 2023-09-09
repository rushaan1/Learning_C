#include <stdio.h>
#include <string.h>
#include <ctype.h>

void without_spaces(const char m[], char newstring[], int maxlen) {
    int len = strlen(m);
    int temp = 0;

    for (int i = 0; i < len; i++) {
        if (m[i] != ' ') {
            newstring[i - temp] = m[i];
        }
        else {
            temp++;
        }
    }
    newstring[len - temp] = '\0';
}

void lowercase_to_upper_vowels(char oldString[], char newString[]) {
    strcpy(newString, oldString);
    int length = strlen(newString);
    for (int i = 0; i < length; i++) {
        if (newString[i] == 'a') {
            newString[i] = 'A';
        }
        else if (newString[i] == 'e') {
            newString[i] = 'E';
        }
        else if (newString[i] == 'i') {
            newString[i] = 'I';
        }
        else if (newString[i] == 'o') {
            newString[i] = 'O';
        }
        else if (newString[i] == 'u') {
            newString[i] = 'U';
        }
    }
}

void case_flip(char oldString[], char newString[]) {
    strcpy(newString, oldString);
    int length = strlen(newString);
    for (int i = 0; i <= length; i++) {
        if (islower(newString[i])) {
            newString[i] -= 32;
        }
        else if (isupper(newString[i])) {
            newString[i] += 32;
        }
    }
}

int main() {
    char string[1000] = "This is a string";
    char _newstring[1000];

    char a[100] = "CHECKING ";
    char b[] = "DONE";
    strcat(a, b);

    char ol[] = "i like to eat lychee LOVELY FRUIT";
    char el[] = "";
    //lowercase_to_upper_vowels(ol,el);
    //puts(el);
    case_flip(ol, el);
    puts(el);
    //printf("%s",a);


    //without_spaces(string, _newstring, sizeof(_newstring));

    //puts(_newstring);

    return 0;
}