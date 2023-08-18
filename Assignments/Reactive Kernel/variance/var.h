typedef struct memory{
    int first;
    float lastMean;
    float lastSqrMean;
    int lastCount;
}memory;

typedef struct out{
    float out;
}out;

void reset(memory* self);

void step(int x, out* _out, memory* self);