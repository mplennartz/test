
#include "word.h"

int main(void){

        REG_GL.size = 32;
        REG_GL.location = 0x00000000;

        print_reg(REG_GL);       

        return 0;
}


