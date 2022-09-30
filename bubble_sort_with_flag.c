#include <stdio.h>

void bubblesort(int * arr, int len){
    for (int i = 0; i < len - 1; i++){
        int flag = 0;
        for (int j = 0; j < len - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                flag = 1;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        // if the array is sorted -> no further iterations 

        if (flag == 0){
            break;
        }
    }
}

int main(){
    int a[5] = {1, 2, 4, 3, -2};
    bubblesort(a, 5);
    for (int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}