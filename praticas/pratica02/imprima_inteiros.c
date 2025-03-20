#include <stdio.h>

int main(){
    printf("%5i\n", 1234);
    printf("%5i\n", 56789);
    printf("%05i\n", 1);
    printf("(%i, %i)\n", -1, 1);
    printf("%02i/%02i/%4i\n", 19, 3, 2025);
    return 0;
}