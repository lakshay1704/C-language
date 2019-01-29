//sparse matrix
#include <stdio.h>
#include<conio.h>
int main(){
    int sparsematrix[3][3] =
    [
        [0,0,3],
        [0,0,5],
        [0,2,0]
    ]
    int size = 0;
    for(int i =0;i<3;i++){
        for (int j = 0;j<3;j++){
            if(sparsematrix[i][j] != 0){
                size++;
            }
        }
    }
    int compactmatrix[3][size];
    int k = 0;
    for(int i = 0;i<3;i++){
        for(int j = 0,j<3,j++){
            if(sparsematrix[i][j] != 0){
                compactmatrix[0][k] = i;
                compactmatrix[1][k] = j;
                compactmatrix[2][k] = sparsematrix[i][j];
                k++;
            }
            for(int i = 0,i<3;i++){
                for(int j = 0;j<size;j++){
                    printf("%d",compactmatrix[i][]j);
                    printf("\n");
                }
                return 0;
            }
        }
    }
}
