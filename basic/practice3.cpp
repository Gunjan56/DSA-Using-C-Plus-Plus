#include<iostream>
using namespace std;

int main(){

    //6.1 write a program to check number is +ve,-ve or zero
    // int n;
    // cout<<"Enter the number = ";
    // cin>>n;

    // if(n>0){
    //     cout<<"Number is positive";
    // }
    // else if(n==0){
    //     cout<<"Number is zero";
    // }
    // else{
    //     cout<<"Number is negative";
    // }

    //6.2 write a program to check number is even or odd
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // if(n%2==0){
    //     cout<<"NUmber is even";
    // }
    // else{
    //     cout<<"Number is odd";
    // }

    //6.3 write a program to print sum of natural numbers
    // int n, i=1, sum=0;
    // cout<<"Enter the number: ";
    // cin>>n;

    // while(i<=n){
    //     sum=sum+i;
    //     i=i+1;
    // }
    // cout<<"Sum to nth number: "<<sum;

    //6.4 write a program to print sum in even number of natural number
    // int n, i=1, sum=0;
    // cout<<"enter the number: ";
    // cin>>n;
    
    // while(i<=n){
    //     if(i%2==0){
    //         sum=sum+i;
            
    //     }
    //     i=i+1;
    // }
    // cout<<"sum of even numbers: "<<sum;

//6.5 write a program to print sum of odd numbers
    // int n, i=1, sum=0;
    // cout<<"enter the number: ";
    // cin>>n;

    // while(i<=n){
    //     if(i%2!=0){
    //         sum=sum+i;
            
    //     }
    //     i=i+1;
    // }
    // cout<<"sum of even numbers: "<<sum;

//6.7 write a program to print multiplication table
    // int n,j;
    // cout<<"Enter the number: ";
    // cin>>n;
    // cout<<"Upto to which: ";
    // cin>>j;

    // for(int i=1; i<=j; i=i+1){
    //     cout<<n<<"*"<<i<<" = "<<(n*i)<<endl;
    // }

    //6.8 write a program to make a mini calculator using switch statement
    // int a,b;
    // char operation;

    // cout<<"Enter the first number: ";
    // cin>>a;
    // cout<<"Enter the second number: ";
    // cin>>b;
    // cout<<"Enter the operation (+,-,*,/,%) = ";
    // cin>>operation;

    // switch (operation)
    // {
    // case '-':
    //     cout<<"subtraction of two number: "<<(a-b);
    //     break;
    // case '+':
    //     cout<<"Sum of two number: "<<(a+b);
    //     break;
    // case '*':
    //     cout<<"Multiplication of two number: "<<(a*b);
    //     break;
    // case '/':
    //     cout<<"division of two number: "<<(a/b);
    //     break;
    // case '%':
    //     cout<<"Remainder of two number: "<<(a%b);
    //     break;
    
    // default:
    //     cout<<"Invalid operation";
    //     break;
    // }

//6.9 write a program to swap two number using temporary variable
    // int a, b, temp;
    // cout<<"Enter first number: ";
    // cin>>a;
    // cout<<"Enter second number: ";
    // cin>>b;

    // cout<<"Before swaping"<<endl;
    // cout<<" a = "<<a<<" b = "<<b<<endl;

    // temp = a;
    // a=b;
    // b = temp;

    // cout<<"after swaping"<<endl;
    // cout<<" a = "<<a<<" b = "<<b;

//6.10 write a program to swap two number without using temporary variable
    // int a,b;
    // cout<<"Enter first number: ";
    // cin>>a;
    // cout<<"Enter second number: ";
    // cin>>b;

    // cout<<"Before swaping"<<endl;
    // cout<<" a = "<<a<<" b = "<<b<<endl;

    // a = a+b;
    // b = a-b;
    // a = a-b;

    // cout<<"After swaping"<<endl;
    // cout<<" a = "<<a<<" b = "<<b;  

//swap values
    // int a;
    // a = 10;
    // cout<<a;
    // a = 20;
    // cout<<a;

    // const int b = 10;
    // cout<<b;
  
//6.11 write a program to calculate HCF and LCM of two numbers
    // int a, b, hcf, lcm;
    // cout<<"Enter first number: ";
    // cin>>a;
    // cout<<"Enter second number: ";
    // cin>>b;

    // for(int i=1; i<=a && i<=b; i++){
    //     if(a%i==0 && b%i==0){
    //         hcf=i;
    //     }
    // }
    
    // lcm=(a*b)/hcf;
    // cout<<"LCM = "<<lcm<<endl;
    // cout<<"HCF = "<<hcf;

//6.12 write a program to find power of a number   
    // int base, exponent;
    // int result=1;
    // cout<<"Enter the base = ";
    // cin>>base;
    // cout<<"Enter the exponent = ";
    // cin>>exponent;

    // for(int i=1; i<=exponent; i++){
    //     result= result*base;
    // } 

    // cout<<base<<" power of "<<exponent<<" = "<<result;

//6.13 write a program to check leap year
    // int year;
    // cout<<"enter a year to check: ";
    // cin>>year;

    // if(year%4==0){
    //     if(year%100==0){
    //         if(year%400==0)
    //             cout<<year<<" is a leap year";
    //         else
    //            cout<<year<<" is not a leap year";    
    //     }
    //     else
    //         cout<<year<<" is a leap year";
    // }    
    // else
    // cout<<year<<" is not a leap year";

//6.14 write a program to find factorial of number
    // int n, result=1;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for (int i=1; i<=n; i=i+1){
    //     result=result*i;
    // }
    // cout<<"Factorial of "<<n<<" = "<<result;

//6.15 write a program to print fibonacci series 
    // int n;
    // cout<<"Enter a number = ";
    // cin>>n;
    // int a=0, b=1;

    // cout<<a<<" "<<b<<" ";

    // for(int i= 2; i<n; i=i+1){
    //     int c=a+b;
    //     cout<<c<<" ";
    //     a=b;
    //     b=c;
    // }

//6.16 write a program to reverse number
    // int n, reverse=0, digit;
    // cout<<"enter a number: ";
    // cin>>n;

    // while(n>0){
    //     digit = n%10;
    //     reverse = (reverse*10) + digit;
    //     n=n/10;
    // }      
    // cout<<"the reversed number = "<<reverse;

//6.17 write a program to check number is palindrome number or not
    // int n,r,sum=0,temp;
    // cout<<"enter the number = ";
    // cin>>n;
    // temp=n;
    // while(n>0){
    // r=n%10;
    // sum=(sum*10)+r;
    // n=n/10;
    // }    
    // if(temp==sum){
    // cout<<"Number is palindrome";
    // }
    // else{
    // cout<<"Number is not palindrome";
    // }

// write a program to check number is armstrong or not
    // int n,r, sum=0, temp;
    // cout<<"enter the number = ";
    // cin>>n;
    // temp=n;

    // while(n>0){
    //     r=n%10;
    //     sum=sum+(r*r*r);
    //     n=n/10;

    // }   
    // if(temp==sum){
    //     cout<<"Armstrong number";
    // } else{
    //     cout<<"Not Armstrong number";
    // }

// write a program to check number is prime number or not

    int num,i, check=0;
    cout<<"enter a number= ";
    cin>>num;

    for(i=2; i<num; i=i+1){
        if(num%i==0){
            check=check+1;
            break;
        }
    }
    if(check==0){
        cout<<"It is a prime number";
    }else{
        cout<<"it is not a prime number";
    }
    return 0;
}