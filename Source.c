#include<stdio.h>
#include <math.h>

    int main()
    {
        int a;  int xa; int b; int xb; int temp = 1; int lcm;// Declartion of the variables
        printf("Hello this is a gcd and lcm calculator ");//output
        printf("Enter a = "); scanf_s("%d", &a); printf("Enter b = "); scanf_s("%d", &b);// input 
        xa = abs(a); a = abs(a);//if the input is negative 
        xb = abs(b); b = abs(b);//if the input is negative
        if(a==0){ printf(" This is the Gcd :%d \n", b); }//output + if a=0
        if (b == 0) { printf(" This is the Gcd :%d \n", a); }//output+ if b=0
        while (temp != 0)//EUCLID Algorithm
        {   
            if (a > b) // gcd(a,b) = gcd(a,b(mod(a)))
            {
                temp = a % b;
                a = b;
                b = temp;
            }
            else { //gcd(a,b)=gcd(b,a)
                temp = b % a;
                b = a;
                b = temp;
            }


        }
        printf(" This is the Gcd :%d \n", a);//the result of the EUCLID Algorithm
        lcm = (xa * xb) / a;//lcm finder
        printf("This is this is the Lcm: %d \n", lcm);//output
    }

