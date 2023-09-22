//                                gcc mainfile.c -o _mainfile

#include <stdio.h>
#include <string.h>

struct dob{
     int date;
     int month;
     int year;
};

struct student{
     int id;
     char name[10000];
     struct dob d; //ENTIRE dob STRUCTURE CAN ALSO BE PUT HERE
};

// https://www.youtube.com/watch?v=46-J15Jb37I

int main(){
    struct student s1;
    s1.id = 5;
    strcpy(s1.name, "Power");
    s1.d.date = 6;
    s1.d.month = 11;
    s1.d.year = 2000;

    printf("\n\nStudent 1 ID:%d \nName:%s\n DOB:%d/%d/%d",s1.id,s1.name,s1.d.date,s1.d.month,s1.d.year);
    return 0;
}
