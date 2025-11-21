#include <stdio.h>

int LinearSearch(int array[], int num_to_find, int len){
    for (int i = 0; i < len; i++){
        if (array[i] == num_to_find) {
            return i;
        }
    }
    return -1;
}

int main(){
    int array[] = {12, 22, 55, 33, 56};
    int num_to_find = 55;

    int len = sizeof(array) / sizeof(array[0]);

    int result = LinearSearch(array, num_to_find, len);

    if (result != -1){
        printf("Index: %d\n", result);
    } else {
        printf("Not Found\n");
    }
    return 0;
}