#include <stdio.h>
#define SIZE 10
int scores[SIZE];
void cal();
int main()
{   
    printf("lets start!\n");
    int i;
    int size;

    for(i=1; i<=9; i++)
        printf("%d 곱하기 %d는 %d\n", 2, i, 2*i);
    cal();

    for(i=0; i<SIZE; i++)  
        printf("배열의 %d번째 값: %d\n", i+1, scores[i]);
    size = sizeof(scores) / sizeof(scores[0]);
    printf("배열의 크기는 %d입니다.", size);
    return 0;
}

void cal()
{   int i;
    for(i=0; i<=SIZE; i++)
        scores[i] = (i+1) * 10;
}
