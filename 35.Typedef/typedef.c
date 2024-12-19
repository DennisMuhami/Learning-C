#include <stdio.h>

//typedef char user[25];


typedef struct 
{
    char name[25];
    char password[25];
    int id;
} User;


int main ()
{
    // typedef = reserved keyword that gives an existing data type a "nickname"

    User user1 = {"Denarmy", "Password", 1234567};
    User user2 = {"Denarmy07", "Password123", 7654321};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);


    return 0;
}
