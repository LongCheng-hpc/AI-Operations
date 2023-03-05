#include "iostream"

void vec_add(float * v1, float * v2, float * v3, int length){
    for(int i = 0; i < length; i++){
        v3[i] = v1[i] + v2[i];
    }
}

int main(){
    int length = 1000;
    float * v1 = (float *) malloc(sizeof(float) * length);
    float * v2 = (float *) malloc(sizeof(float) * length);
    float * v3 = (float *) malloc(sizeof(float) * length);
    vec_add(v1, v2, v3);
}