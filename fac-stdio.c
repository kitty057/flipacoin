#define SODIUM_STATIC
#include <sodium.h>
#include <stdio.h>
int main() {
    int flip=randombytes_uniform((uint32_t)2);
    if(flip!=0) {
        printf("tails");
        }
        else {
            printf("heads");
            }
        }
