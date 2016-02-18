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

int getUserInfo2(char name[]) {
    char fname[48];
    char lname[48];
    char msg[100];
    char fullName[96];
    size_t length;
    int luck;
    sprintf(msg, "Enter your last name followed by your first name: ");
    puts(msg);
    scanf("%s %s", lname,fname);
    sprintf(fullName, "%s %s", fname, lname);
    length = ((sizeof(char) *strlen(fullName))+1);
    memcpy(name, fullName, length);
    sprintf(msg, "What's your lucky number?");
    puts(msg);
    scanf("%d", &luck);
    return luck;
}

int main() {
    char fullname[100];
    char msg[99];
    //version 1, using strcpy and strcat
    int lucky = getUserInfo(fullname);
    printf("%s's lucky number is %d.\n", fullname, lucky);
    //version 2, using sprintf, strlen and memcpy
    lucky = getUserInfo2(fullname);
    sprintf(msg, "%s's lucky number is %d.\n", fullname, lucky);
    puts(msg);

    return 0;
}
