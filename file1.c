#include <stdio.h>

int binary(int num){
    int arr[100];
    int index=0;
    if(num<0){
        return 0;
        
    }
    
    while (num>0){
        arr[index++]=num%2;
        num/=2;
        
        
    }
    
    for(int i=index-1;i>=0;i--){
        printf("%d",arr[i]);
        
    }
    
    printf("\n");
    

}
int main() {
    int num;
    printf("enter the number in decimal form =");
    scanf("%d",&num);
    
    
    binary(num);
    
    

    return 0;
}
