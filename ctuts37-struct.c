#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[35];
}luffy, zoro, sanji;
//struct Student luffy, zoro, sanji;

void displayinfo(struct Student stud)
{
    printf("Displaying student's information:\n");
    printf("ID = %d\nMarks = %d\nFavourite character is %c\nName is %s\n", stud.id, stud.marks, stud.fav_char, stud.name);
}

int main()
{
    luffy.id = 1;
    zoro.id = 2;
    sanji.id = 3;
    luffy.marks = 100;
    zoro.marks = 100;
    sanji.marks = 70;
    luffy.fav_char = 'M';
    zoro.fav_char = 'S';
    sanji.fav_char = 'B';
    strcpy(luffy.name, "Man of Rubber");
    strcpy(zoro.name, "Pirate Hunter");
    strcpy(sanji.name, "Black Leg Sanji");
    // printf("Luffy's ID is %d, marks are %d, favourite character is %c and name is %s\n", luffy.id, luffy.marks, luffy.fav_char, luffy.name);
    // printf("Zoro's ID is %d, marks are %d, favourite character is %c and name is %s\n", zoro.id, zoro.marks, zoro.fav_char, zoro.name);
    // printf("Sanji's ID is %d, marks are %d, favourite character is %c and name is %s\n", sanji.id, sanji.marks, sanji.fav_char, sanji.name);

    printf("Luffy\n");
    displayinfo(luffy);
    printf("\nZoro\n");
    displayinfo(zoro);
    printf("\nSanji\n");
    displayinfo(sanji);

    return 0;
}