#include <stdio.h>
#define ROWS 2
#define COLS 2

int firstOfMatrix [ROWS][COLS] = {{1,1},{0,0}};
int main(void){
    int i,j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", firstOfMatrix[i][j]);  // 행렬 원소 출력
        }
        printf("\n");  // 행 단위 개행
    }
    return 0;
}
