#include <stdio.h>
#include <stdlib.h>


void minimum(int a[], int b[], int c[], int listSize){
    int i;
    for (i = 0; i < listSize; i++){

        if (a[i] <= b[i]) {
            c[i] = a[i];
        }
        else {
            c[i] = b[i];
        }
    }
}

void exchange(int a[], int b[], int listSize){
    int buffer;

    int i;
    for (i = 0; i < listSize; i++){
        buffer = a[i];
        a[i] = b[i];
        b[i] = buffer;
    }
}

void listOutput(int a[], int listSize){
    int i;
    for (i = 0; i < listSize; i++){
        printf("\n list element: %d", a[i]);
    }
    printf("\nEnd\n\n");
}

int main(){
    int listSize = 3;
    int firstList[] = {0, 6, 2};
    int secondList[] = {4, 8, 1};
    int thirdList[listSize];
    int userInput;


    printf("Functions:\n\n");
    printf("1. Show A list\n");
    printf("2. Show B list\n");
    printf("3. Swap A and B values\n");
    printf("4. Fill out C list\n");
    scanf("%d", &userInput);

    switch(userInput){
        case 1:
            listOutput(firstList, listSize);
            break;
        case 2:
            listOutput(secondList, listSize);
            break;
        case 3:
            exchange(firstList, secondList, listSize);
            printf("\nA list:\n");
            listOutput(firstList, listSize);
            printf("\nB list:\n");
            listOutput(secondList, listSize);
            break;
        case 4:
            minimum(firstList, secondList, thirdList, listSize);
            listOutput(thirdList, listSize);
            break;
        default:
            printf("Wrong user input!\n\n\n");
    }

        return 0;
}