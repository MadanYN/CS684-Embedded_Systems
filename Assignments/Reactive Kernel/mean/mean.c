#include <stdio.h>
#include "mean.h"

void reset(memory* self){
    self->first = 1;
}

void step(int x, out* _out, memory* self){
    if(self->first){
        _out->out = x;
        self->first = 0;
    }
    else{
        _out->out = (_out->out * self->lastCount + x)/(self->lastCount + 1 );
    }
    self->lastCount = self->lastCount + 1;
}