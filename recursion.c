//Q1

// #include <stdio.h>

// int digits(int n){
//     int temp = 0;
//     if (n == 0)
//         return 0;
//     else{
//         temp = 1 + digits(n/10);
//     }
// return temp;
// }

// void main(){
//     int n;
//     printf("Enter your number: ");
//     scanf("%d", &n);
//     int x = digits(n);

//     printf("Your number has %d digits.", x);

// }

//Q4
#include <stdio.h>

int sum(int y){
    int temp=0;
    if (y==0){
        return 0;
    }
    else{
        temp = sum(y/10) + y%10;
    }
    return temp;
}

void main(){
    int x;
    printf ("Enter Your Number: ");
    scanf("%d", &x);

    int s = sum(x);

    printf ("Your sum of digits are: %d", s);
}