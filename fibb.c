#include <stdlib.h>
#include <stdio.h>


void fibbInt(){
    int a = 0;
    int n1 = 0;
    int n2 = 1;

    while (3 > 2){
        n2 = n1 + n2;
        n1 = n2 - n1;
        a++;
        if (n2 < 0){
            printf("el valor maximo en Int es %d \t valor: %d\n", a , n1);
            break;
        }

    }


}

void fibbUInt(){
    int a = 0;
    unsigned int n1 = 0;
    unsigned int n2 = 1;

    while (3 > 2){
        n2 = n1 + n2;
        n1 = n2 - n1;
        a++;
         
        if (n2 < n1){
            printf("el valor maximo en UInt es %d \t valor: %u\n", a , n1);
            break;
        }

    }


}



void fibbChar(){
    int a = 0;
    char n1 = 0;
    char n2 = 1;

    while (3 > 2){
        n2 = n1 + n2;
        n1 = n2 - n1;
        a++;
        if (n2 < 0){

            printf("el valor maximo en char es %d \t valor: %d\n", a , n1);
            break;
        }

    }


}

void fibbUChar(){
    int a = 0;
    unsigned char n1 = 0;
    unsigned char n2 = 1;

    while (3 > 2){
        n2 = n1 + n2;
        n1 = n2 - n1;
        a++;
        if (n2 < n1){

            printf("el valor maximo en uchar es %d \t valor: %u\n", a , n1);
            break;
        }

    }


}
void fibbShort(){
    int a = 0;
    short n1 = 0;
    short n2 = 1;

    while (3 > 2){
        n2 = n1 + n2;
        n1 = n2 - n1;
        a++;
        if (n2 < 0){

            printf("el valor maximo en short es %d \t valor: %d\n", a , n1);
            break;
        }

    }


}
void fibbUShort(){
    int a = 0;
    unsigned short n1 = 0;
    unsigned short n2 = 1;

    while (3 > 2){
        n2 = n1 + n2;
        n1 = n2 - n1;
        a++;
        if (n2 < n1){

            printf("el valor maximo en ushort es %d\t valor: %u\n", a , n1);
            break;
        }

    }


}


void fibbLong(){
    int a = 0;
    long n1 = 0;
    long n2 = 1;

    while (3 > 2){
        n2 = n1 + n2;
        n1 = n2 - n1;
        a++;
        if (n2 < 0){

            printf("el valor maximo en long es %d\t valor: %li\n", a , n1);
            break;
        }

    }


}
void fibbULong(){
    int a = 0;
    unsigned long  n1 = 0;
    unsigned long n2 = 1;

    while (3 > 2){
        n2 = n1 + n2;
        n1 = n2 - n1;
        a++;
        if (n2 < n1){

            printf("el valor maximo en ulong es %d\t valor: %lu\n", a , n1);
            break;
        }

    }


}

void fibbLongl(){
    int a = 0;
    long long n1 = 0;
    long long n2 = 1;

    while (3 > 2){
        n2 = n1 + n2;
        n1 = n2 - n1;
        a++;
        if (n2 < 0){

            printf("el valor maximo en longl es %d\t valor: %lli\n", a , n1);
            break;
        }

    }


}
void fibbULongl(){
    int a = 0;
    unsigned long long n1 = 0;
    unsigned long long n2 = 1;

    while (3 > 2){
        n2 = n1 + n2;
        n1 = n2 - n1;
        a++;
        if (n2 < n1){

            printf("el valor maximo en ulongl es %d\t valor: %llu\n", a , n1);
            break;
        }

    }


}

int main(int argc, char const *argv[])
{
    fibbInt();
    fibbUInt();
    fibbChar();
    fibbUChar();
    fibbShort();
    fibbUShort();
    fibbLong();
    fibbULong();
    fibbLongl();
    fibbULongl();


    return 0;
}
