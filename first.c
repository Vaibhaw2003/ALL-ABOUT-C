/*     
#include<stdio.h>
#include<conio.h>

int main(){

    // printf("hello harsh");

    int num;
    // int b = 4;

    // printf("%d",a+b);
    //   printf("%d",(a>b?a:b));
//scanf("%d", num);
//printf("%d", num);
int a,b;
a =  2;
b = 4;
int sum = a+b;
printf("%d", sum);


}
*/




// String input and output in C language -----------
/*
#include<stdio.h>
int main(){
    char a[34]; // char is used to store string and 34 is the size of string.
     printf("Enter a name: ");
    gets(a);         // gets is used to take string input
    fflush(stdin);    // fflush is used to clear the input buffer
   printf("hello: ");
   printf(a);     // puts is used to print string.
   printf("  !");  // puts me next line me chala jata hai----printf me nahi jata hai.
    return 0;
   
}
    */   


  // Integer input and output in C language -----------
  // & is used to store the age in the variable.

    #include<stdio.h>
    int main(){
        int a;
        printf("Enter a age: ");
        scanf("%d", &a);// & is used to store the value in the variable.
        fflush(stdin); // fflush is used to clear the input buffer.
        printf("Your age is: %d", a); // %d is used to print integer value.
    }


    