#include <stdio.h>
#include <string.h>

int getUserInfo(char name[]) {
    char fname[48];
    char lname[48];
    int luck;
    printf("Enter your last name followed by your first name: ");
    scanf("%s %s", lname,fname);
    strcpy(name, fname);
    strcat(name, " ");
    strcat(name, lname);
    printf("What's your lucky number?");
    scanf("%d", &luck);
    return luck;
}

int main() {
    char fullname[100];
    int lucky = getUserInfo(fullname);
    printf("%s's lucky number is %d.\n", fullname, lucky);

    return 0;
}