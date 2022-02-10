/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

long factorial(int num){
    long fact = 1;
    for(int i = 1;i<=num;i++){
        fact*=i;
    }
    return fact;
}

int main()
{   int steps;
    long sum=0;
    printf("Enter The Number of Steps to climb mountain : ");
    scanf("%d",&steps);
    
    for(int i = steps,j=0;i>=0;i=i-2,j++){
        if(steps%2!=0 && i==0){
            break;
        }
        
        sum+= factorial(i+j)/(factorial(i)*factorial(j));
    }
    printf("The Total Number Of Combinations steps with (2 or 1) are : %ld",sum);
    return 0;
}


