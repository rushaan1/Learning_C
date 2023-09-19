//                                gcc mainfile.c -o _mainfile

#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main(){
   HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    char colorChoice;

    printf("Choose a color:\n");
    printf("R - Red\n");
    printf("G - Green\n");
    printf("B - Blue\n");
    printf("Y - Yellow\n");
    printf("M - Magenta\n");

    scanf("%c", &colorChoice); // Note the space before %c to consume any leading whitespace

    // Convert the entered character to uppercase
    colorChoice = toupper(colorChoice);

    switch (colorChoice) {
        case 'R':
            SetConsoleTextAttribute(console, FOREGROUND_RED);
            break;
        case 'G':
            SetConsoleTextAttribute(console, FOREGROUND_GREEN);
            break;
        case 'B':
            SetConsoleTextAttribute(console, FOREGROUND_BLUE);
            break;
        case 'Y':
            SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_GREEN);
            break;
        case 'M':
            SetConsoleTextAttribute(console, FOREGROUND_RED | FOREGROUND_BLUE);
            break;
        default:
            printf("Invalid color choice.\n");
            return 0;
    }


    int n; 
    printf("Enter a number (preferably less than 100): ");
    scanf("%d",&n);
    printf("\n");
    n *= 2;
    int L = 0;
    printf("Loop? (Y/N)");
    int y_or_n;
    while (1){
       y_or_n = getche();
       if (y_or_n == 'y' || y_or_n == 'Y') {
            L = 1;
            break; 
        } else if (y_or_n == 'n' || y_or_n == 'N') {
            break; 
        }
    }
    do{
    for (int i = 0; i <= n; i+=2){
        int m;
        if (n/2>i){
            m = i;}
        else{
            m = n - i;}
          
        for (int j = 0; j <=m; j++){
            printf("*");
            
        }Sleep(1);
        printf("\n");    
        
    }}while(L);
    return 0;
}
