#include <stdio.h>
void count (char *p){
    int c1=0,c2=0;
    while(*p !='\0'){
        if( *p=='A'|| *p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='a'|| *p=='e'||*p=='i'||*p=='o'||*p=='u'){
            c1++;
        }
            
        
        else{
            
        
            c2++;
        }
        p++;
        
    }
        
        
        
    
    
  printf("the number of vowels in the given string is =%d\n ",c1);
  printf("the number of consonants in the given  string is = %d\n",c2);
  
}

int main() {
    
    char string[10];
    printf("enter the string = ");
    fgets(string,sizeof(string),stdin);
    count(string);
    
    
    

    return 0;
}
