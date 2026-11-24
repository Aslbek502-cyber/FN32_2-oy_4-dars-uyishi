// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
void reverse(int *arr, int size){  
for(int i = size - 1; i >= 0; i--){
    printf("%d ", *(arr+i));
}
}


int main() {
int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
   

    reverse(arr, size);
    

    return 0;
} 