#include <stdio.h>

void this(int *x, int y){
int *a;
int b;
a = &y;
y = *x;
b = 777;
x = &b;
}
int main(void){
int val,num;
val=1234;
num = 5678;
this(&val,num);

printf("%d %d",val,num);

return 0;
}
