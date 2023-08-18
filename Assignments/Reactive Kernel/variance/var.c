#include <stdio.h>
#include <math.h>
#include "var.h"

void reset(memory* self){
    self->first = 1;
}

void step(int x, out* _out, memory* self){
    if(self->first){
        self->lastMean = x;
        self->lastSqrMean = pow(x,2);
        _out->out = 0;

        self->first = 0;
    }
    else{
        self->lastMean = (self->lastMean * self->lastCount + x)/(self->lastCount + 1);
        self->lastSqrMean = (self->lastSqrMean * self->lastCount + x*x)/(self->lastCount + 1);
        _out->out = self->lastSqrMean - self->lastMean * self->lastMean;
    }
    self->lastCount = self->lastCount + 1;
}