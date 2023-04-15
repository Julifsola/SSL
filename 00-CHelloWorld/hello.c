#include <stdio.h>

int main(){
    char cadena[14] = "Hello, World!";
    
    FILE *f = fopen("output.txt", "w");
    fprintf(f, cadena);
    fclose(f);

    return 0;
}