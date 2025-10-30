#include <stdio.h>
#include <stdbool.h>

int main() {
    int rok_urodzenia;

    printf("podaj rok urodzenia");
    scanf("%d" , &rok_urodzenia);

    int wzrost;
    printf("podaj wzrost");
    scanf("%d" , &wzrost);

    printf("mam %d wzrostu i urodziłem się w %d", wzrost , rok_urodzenia);
   
    return 0
}
