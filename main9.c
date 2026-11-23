// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
int a[5] = {10, 20, 30, 40, 50};
    int *p = a;
    int max = *p;
    
    for(int i = 0; i < 5; i++){
      if(*(p + i) > max){
        max = *(p + i);
    }
}
    printf("katta son: %d", max);
  


    return 0;
}