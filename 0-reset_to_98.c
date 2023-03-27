#include <stdio.h>

void reset_to_98(int *ptr){
    *ptr = 98;      
}

int main() {
    int myNum = 0;
    int *myPtr = &myNum;

    reset_to_98(myPtr);

    printf("The value of myNum is now %d\n", myNum);

    return 0;
}
