// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    int sum = 0;

    for(int i = 0; i < 5; i++){
        sum += *(p + i);
    }
    printf("%d", sum);
   
    return 0;
}