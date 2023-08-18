typedef struct memory{
    int first;
    float lastMean;
    int lastCount;
}memory;

typedef struct out{
    float out;
}out;

void reset(memory* mem);

void step(int x, out* _out, memory* _self);