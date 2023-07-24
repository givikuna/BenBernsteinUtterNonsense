#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("name: ");
    scanf("%99[^\n]%*c", name);

    if (strcmp(name, "ben bernstein") == 0)
        printf("utter nonsense\n");
    else
        printf("something that makes sense at least\n");
    // Sorry Benny!

    return 0;
}
