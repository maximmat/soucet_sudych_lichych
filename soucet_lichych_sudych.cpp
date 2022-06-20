#include <stdio.h>

int soucet_sudych(cislo) {
    int suda = 0;
    for (int i = 0; i <= cislo; i += 2) {
        suda += i;
    }
    return suda;
}

int soucet_lichych(cislo) {
    int licha = 0;
    for (int i = 1; i <= cislo; i += 2) {
        licha += i;
    }
    return licha;
}

int main() {
    printf("Soucet sudych: %d\n", soucet_sudych(5));
    printf("Soucet lichych: %d\n", soucet_lichych(5));
}