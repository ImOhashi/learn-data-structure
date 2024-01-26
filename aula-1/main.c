#include <stdio.h>  // Trabalhar com entrada e saída de dados
#include <stdlib.h> // Trabalhar com memória

typedef struct pessoa {
    unsigned long long id; // 12 bytes
    int idade; // 4 bytes
} Pessoa;

int main() {

    Pessoa jane_doe;
    
    int inteiro;
    short int short_inteiro;
    long int long_inteiro;
    long long int long_long_inteiro;
    float decimal;
    double double_decimal;
    char letra;

    printf("%d - pessoa\n", sizeof(jane_doe));
    printf("%d - inteiro\n", sizeof(inteiro));
    printf("%d - short_inteiro\n", sizeof(short_inteiro));
    printf("%d - long_inteiro\n", sizeof(long_inteiro));
    printf("%d - long_long_inteiro\n", sizeof(long_long_inteiro));
    printf("%d - decimal\n", sizeof(decimal));
    printf("%d - double_decimal\n", sizeof(double_decimal));
    printf("%d - letra\n", sizeof(letra));

    return 0;
}