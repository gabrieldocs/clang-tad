#include <iostream>

using namespace std;

int sample() {

    float **mat = (float**) malloc(3*sizeof(float*));
    for(int i=0; i < 3; i++) {
        mat[i] = (float*) malloc(3* sizeof(float));
    }

    for(int i=0; i < 3; i++) {
        for(int j=0;j<3;j++) {
            printf("%f", mat[i][j]);
        }
        printf("\n");
    }

    std::cout << "Memory addressess: \n" << std::endl;

    for(int i=0; i < 3; i++) {
        for(int j=0;j<3;j++) {
            printf("%p ", **mat);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++) {
        free(mat[i]);
    }
    free(mat);
    return 0;
}
