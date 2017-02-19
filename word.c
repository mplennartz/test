
#include "word.h"

void print_reg(struct _word REG){
        printf("REG size : %2d\n",REG.size);
        printf("REG location : x%8x\n",REG.location);
}
