#include <stdio.h>

int main(int argc, char *argv[]) {
    int a, b;
    sscanf(argv[2], "%d", &a);
    sscanf(argv[3], "%d", &b);
    printf("%s %d * %d = %d\n", argv[1], a, b, a*b);
    return 0;
}
