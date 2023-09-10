//                                                            gcc mainfile.c -o _mainfile

#include <stdio.h>

int main() {
    FILE *_file;
    _file = fopen("TestFile.txt","w");
    int oddNumbers = 0;
    printf("Enter an amount: ");
    scanf("%d",&oddNumbers);
    fprintf(_file,"Contains all odd numbers upto %d:\n\n",oddNumbers);
    for (int i = 0; i<oddNumbers; i++){
	if (i%2!=0){
	    fprintf(_file,"%d\n",i);
	}
    }
    fclose(_file);
    printf("TestFile.txt now contains all add numbers up to %d",oddNumbers);
    return 0;
}
