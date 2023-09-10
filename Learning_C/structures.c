#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

typedef struct Packages_Ready_For_Distribution {
    int number;
    char content[10000];
    char address[10000];
    float price;
} pkgs;

int main() {
    pkgs pk;
    pk.number = 7;
    strcpy(pk.content, "Oranges");
    strcpy(pk.address, "7th Street, Downtown");
    pk.price = 7.50;

    //printf("Package Content: %s\nPackage Number: %d\nPackage Delivery Address: %s\nPackage Price: %f\n\n",pk.content, pk.number, pk.address, pk.price);

    pkgs _pk = { 8,"Mangoes","4th Avenue", 14.0 };
    //printf("Package Content: %s\nPackage Number: %d\nPackage Delivery Address: %s\nPackage Price: %f\n",_pk.content, _pk.number, _pk.address, _pk.price);

    struct Packages_Ready_For_Distribution l_packages[50];

    l_packages[0].number = 20;
    strcpy(l_packages[0].content, "Lychee 1");
    strcpy(l_packages[0].address, "Chinatown");
    l_packages[0].price = 10.50;

    printf("Package Content: %s\nPackage Number: %d\nPackage Delivery Address: %s\nPackage Price: %f\n\n", l_packages[0].content, l_packages[0].number, l_packages[0].address, l_packages[0].price);


    l_packages[1].number = 21;
    strcpy(l_packages[1].content, "Lychee 2");
    strcpy(l_packages[1].address, "TaiwanTown");
    l_packages[1].price = 8.50;

    printf("Package Content: %s\nPackage Number: %d\nPackage Delivery Address: %s\nPackage Price: %f\n", l_packages[1].content, l_packages[1].number, l_packages[1].address, l_packages[1].price);


    pkgs pickles[10];
    pickles[0].number = 102;
    strcpy(pickles[0].address, "Japan");
    strcpy(pickles[0].content, "Pickles");
    pickles[0].price = 500;
    printf("\n\nPackage Content: %s\nPackage Number: %d\nPackage Delivery Address: %s\nPackage Price: %f\n", pickles[0].content, pickles[0].number, pickles[0].address, pickles[0].price);

    pkgs _m[10];
    struct Packages_Ready_For_Distribution* ptr;
    ptr = &_m;
    ptr->number = 70;
    ptr++;
    ptr->number = 71;
    ptr--;
    printf("\n\nNumber: %d", ptr->number);




    struct student rushaan;
    rushaan.roll = 35;
    rushaan.cgpa = 9.3;
    strcpy(rushaan.name, "rushaan");

    struct student m = { 48,9.0,"M.Hamel" };
    //printf("M's name: %s, roll no:%d, cgpa:%f\n\n", m.name, m.roll, m.cgpa);


    struct student many_maths_students[50];
    many_maths_students[0].roll = 28;
    strcpy(many_maths_students[0].name, "Barone");
    many_maths_students[0].cgpa = 14.8;

    //printf("Barone & his CGPA: %s, %f", many_maths_students[0].name, many_maths_students[0].cgpa);
}