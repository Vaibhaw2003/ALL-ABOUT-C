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
    int main()
     /* int a;
        printf("Enter a age: ");
        scanf("%d", &a);// & is used to store the value in the variable.
        fflush(stdin); // fflush is used to clear the input buffer.
        printf("Your age is: %d", a); // %d is used to print integer value.  */


  // if else condition in C language -----------
    /*    {  
int a;
printf("Entern a number: ");
scanf("%d", &a);
fflush(stdin);

    if (a<=999)
    {
    printf("smaller number");
    }
    else
    {
        printf("greater number");
        
    }
  }  */



    // if else if condition in C language -----------
    //  {
    //     int a,b,c;
    //     printf("Enter a number: ");
    //     scanf("%d", &a,&b,&c);
    //     fflush(stdin);
    
    //     if (a>b && a>c)
    //     {
    //         printf("a is greater");
    //     }
    //     else if (b>a && b>c)
    //     {
    //         printf("b is greater");
    //     }
    //     else
    //     {
    //         printf("c is greater");
    //     }
    //  }  



    //c program to swap two numbers without using third variable -----------
/*   
    {
        int a,b;
        printf("Enter two number: ");
        scanf("%d %d", &a,&b);
        fflush(stdin);
        printf("Before swapping: a=%d b=%d\n", a,b);
        a = a + b; // a=2+4=6
        b = a - b; // b=6-4=2
        a = a - b; // a=6-2=4
        printf("After swapping: a=%d b=%d", a,b);
    }     */



    // find largest number among three numbers using nested if else -----------

    /*
    {
        int a,b,c;
        printf("Enter three number: ");
        scanf("%d %d %d", &a,&b,&c);
        fflush(stdin);
        if (a>=b)
        {
            if (a>=c)
            {
                printf("a is largest");
            }
            else
            {
                printf("c is largest");
            }
        }
        else
        {
            if (b>=c)
            {
                printf("b is largest");
            }
            else
            {
                printf("c is largest");
            }
        }
    }  */


    //given number is even or odd using if else -----------
    /*
    {
        int a;
        printf("Enter a number: ");
        scanf("%d", &a);
        fflush(stdin);
        if (a%2==0)
        {
            printf("Even number");
        }
        else
        {
            printf("Odd number");
        }
    }  */


    //prime number or not using if else -----------
    /* 
    {
        int a,i,flag=0;

        printf("Enter a number: ");
        scanf("%d", &a);
        fflush(stdin);
        for ( i = 2; i <= a/2; i++)
        {
            if (a%i==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            printf("Prime number");
        }
        else
        {
            printf("Not prime number");
        }
    }  */

    //fibonacci series -----------

    /*
    {
        int n1=0,n2=1,n3,i,number;
        printf("Enter a number: ");
        scanf("%d", &number);
        fflush(stdin);
        printf("%d %d", n1,n2);
        for ( i = 2; i < number; i++)
        {
            n3=n1+n2;
            printf(" %d", n3);
            n1=n2;
            n2=n3;
        }
    }  */


    //WAP to find GCD and LCM of two numbers -----------

    {
        int a,b,i,gcd,lcm;
        printf("Enter two number: ");
        scanf("%d %d", &a,&b);
        fflush(stdin);
        for ( i = 1; i <= a && i <= b; i++)
        {
            if (a%i==0 && b%i==0)
            {
                gcd=i;
            }
        }
        lcm=(a*b)/gcd;
        printf("GCD of %d and %d is %d\n", a,b,gcd);
        printf("LCM of %d and %d is %d", a,b,lcm);
    }  
    