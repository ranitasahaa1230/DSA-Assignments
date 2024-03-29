// 1. Write a function to calculate the area of a circle. (TSRS)
// #include<stdio.h>
// int area(int);
// int main(int r){
//     int s;
//     printf("Enter a no.");
//     scanf("%d",&r);
//     s=area(r);
//     printf("area is %d",s);
//     return 0;
// }
// int area(int a){
//     return ((22*a*a)/7);
// }

// 2. Write a function to calculate simple interest. (TSRS)
// #include<stdio.h>
// int SI(int,int,int);
// int main(int r,int b,int c){
//     int s;
//     printf("Enter 3 no.");
//     scanf("%d%d%d",&r,&b,&c);
//     s=SI(r,b,c);
//     printf("si is %d",s);
//     return 0;
// }
// int SI(int r,int t,int p){
//     return ((p*t*r)/100);
// }

// 3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)
// #include<stdio.h>
// int Even(int);
// int main(int r){
//     int s;
//     printf("Enter a no.");
//     scanf("%d",&r);
//     s=Even(r);
//     printf("no is %d",s);
//     return 0;
// }
// int Even(int r){
//     if(r%2==0){
//         return 1;
//     }
//     return 0;
// }

// 4. Write a function to print first N natural numbers (TSRN)
// #include<stdio.h>
// void pritfN(int);
// int main(){
//     int s;
//     printf("Enter a no.");
//     scanf("%d",&s);
//     pritfN(s);
//     return 0;
// }
// void pritfN(int r){
//     for(int i=1;i<=r;i++){
//         printf("\n%d",i);
//     }
// }

// 5. Write a function to print first N odd natural numbers. (TSRN)
// #include<stdio.h>
// void pritfN(int);
// int main(){
//     int s;
//     printf("Enter a no.");
//     scanf("%d",&s);
//     pritfN(s);
//     return 0;
// }
// void pritfN(int r){
//     for(int i=1;i<=r;i++){
//         printf("\n%d",2*i+1);
//     }
// }

// 6. Write a function to calculate the factorial of a number. (TSRS)
// #include<stdio.h>
// int fact(int);
// int main(int a){
//     printf("Enter a no.");
//     scanf("%d",&a);
//     int f=fact(a);
//     printf("the fact is %d",f);
//     return 0;
// }
// int fact(int r){
//     int fact=1;
//     for(int i=1;i<=r;i++){
//         fact=fact*i;
//     }
//     return fact;
// }

// 7. Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)

// #include<stdio.h>
// int comb(int,int);
// int main(int a,int b){
//     printf("Enter a no.");
//     scanf("%d %d",&a, &b);
//     int res=comb(a,b);
//     printf("%d",res);
//     return 0;
// }
// int  fact(int n){
//     int facti=1;
//     for(int i=1;i<=n;i++){
//         facti=facti*i;
//     }
//     return facti;
// }
// int comb(int n,int r){    
//     return fact(n)/(fact (r)*fact(n-r));
// }

// 8. Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time. (TSRS)

// #include<stdio.h>
// int perm(int,int);
// int main(int a,int b){
//     printf("Enter a no.");
//     scanf("%d %d",&a, &b);
//     int res=perm(a,b);
//     printf("%d",res);
//     return 0;
// }
// int  fact(int n){
//     int facti=1;
//     for(int i=1;i<=n;i++){
//         facti=facti*i;
//     }
//     return facti;
// }
// int perm(int n,int r){    
//     return fact(n)/(fact(n-r));
// }

// 9. Write a function to check whether a given number contains a given digit or not.
// (TSRS)

// #include<stdio.h>
// int comb(int,int);
// int main(int a,int b){
//     printf("Enter a no.");
//     scanf("%d %d",&a, &b);
//     comb(a,b);
//     return 0;
// }
// int comb(int n,int dig){
//     int temp=n,flag=0;
//     while(temp!=0){
//         int rem=temp%10;
//         if (rem==dig) flag=1;
//         temp=temp/10;
//     }
//     if(flag==1) printf("contains no");
//     else printf("not contains");
//     return n;
// }

// 10. Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include<stdio.h>
int primeF(int);
int main(int a){
    printf("Enter a no.");
    scanf("%d",&a);
    primeF(a);
    return 0;
}
int primeF(int n){
    int i;
    for (i = 2; n!=1; i++)
    {
        while(n%i==0){
            printf("%d ,",i);
            n=n/i;
        }
    }
    // if(n!=1){
    //     printf("%d",n);
    // }
    return n;
}