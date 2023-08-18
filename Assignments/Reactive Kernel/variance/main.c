#include <stdio.h>
#include "var.h"

memory mem;
int main(){
    int x;
    out res;

    reset(&mem);

    while(1){
        printf("x = ");
        if(scanf("%i", &x) == EOF){
            return 0;
        }
        step(x, &res, &mem);
        printf("variance = %f\n", res.out);
    }
}