#ifndef WORD_H
#define WORD_H

#include <stdio.h>


struct _word{
        unsigned int    size;
        unsigned int    location;

} REG_GL;

void print_reg(struct _word);

#endif
