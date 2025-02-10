
#include <stdio.h>

int main() {
// int num;
// scanf("%d",&num);
// for(int i=1; i<=10; i++){
//     printf("%d * %d = %d\n",num,i,num*i);
// }

int init,incr,days;
scanf("%d %d %d",&init,&incr,&days);
int temp=incr;
for(int i=1; i<=days; i++){
    temp=init+incr;
    init = temp;
    incr+=20;
    
}
    printf("%d",init);
    
    return 0;
}