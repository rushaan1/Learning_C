//                                                            gcc mainfile.c -o _mainfile

#include <stdio.h>
#include <conio.h> // this is necessary for getchar(), getch() & getche() functions

int main(){
    //******* EXAMPLE OF getchar(), getch(), getche() & ALSO NORMAL scanf() functions *******
    
    char myChar1;
    char myChar2;
    char myChar3;
    char myChar4;
    
    char temp;

    printf("1.Enter a char and press Enter:");
    scanf("%c",&myChar1); // scanf() FUNCTION IS USED TO TAKE INPUT AND PUT IT IN A VARIABLE, IT IS NOT LIMITED TO CHARS AND CAN TAKE INPUT IN INT, FLOAT ETC

    scanf("%c",&temp); // PLEASE IGNORE THIS AS THIS IS ONLY FOR PREVENTING THE ENTER FROM GETTING INSIDE THE getchar();

    printf("\n2.Enter a char and press Enter:");
    myChar2 = getchar(); // THIS FUNCTION ONLY TAKES 1 CHAR BUT U NEED TO PRESS ENTER

    printf("\n3.Enter a char:");
    myChar3 = getch(); // WHEN U ENTER A CHAR IT AUTOMATICALLY TAKES IT AND DOESN'T SHOWS IT ON THE SCREEN AND U DONT NEED TO PRESS ENTER

    printf("\n4.Enter a char:");
    myChar4 = getche(); // SAME LIKE THE ABOVE BUT IT SHOWS AFTER UVE ENTERED A CHAR, AUTOMATICALLY TAKES THE CHAR AND U DONT NEED TO PRINT ENTER
    

    printf("\n\n\n1.%c\n2.%c\n3.%c\n4.%c\n\n", myChar1, myChar2, myChar3, myChar4); // PRINTING THE CHARS WITH GOOD FORMATTING


    //******* EXAMPLE OF sscanf() FUNCTION ********

    char myText[1000] = "Max 18 9.0";
    char name[1000];
    int age;
    float gpa;
    sscanf(myText, "%s %d %f", name, &age, &gpa);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);


   //******* EXAMPLE OF sprintf() FUNCTION ********

    char textStorage[1000];   
    sprintf(textStorage, "AB BC CD num: %d",20);
    
    printf("\n%s",textStorage);
    return 0;
}
