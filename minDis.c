#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
        float charac[5];
        char lab[20];
}data;

float disEuc(data, data);
float disMan(data, data);

int main() {
        char filename[20];
        scanf("%s", &filename);
        FILE *fptr;
        fptr = fopen(filename, "r");
        fclose(fptr);
}


float disEuc(data nuE, data ceN) {
        float dis = 0;

        for(int i = 1; i < 5; i++) {
                dis += pow(nuE.charac[i] - ceN.charac[i], 2);
        }
        dis = sqrt(dis);

        return dis;
}

float disMan(data nuE, data ceN) {
        float dis = 0;

        for(int i = 1; i < 5; i++) {
                dis += abs(nuE.charac[i] - ceN.charac[i]);
        }

        return dis;
}
