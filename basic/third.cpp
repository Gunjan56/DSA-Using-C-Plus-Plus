#include<iostream>
using namespace std;
// if else statement
int main(){
    // int x=10;
    //  if(x==10){
    //     cout<<"yes it is true"<<endl;
    //  }
    //  if(x>5){
    //     cout<<"Statement 2"<<endl;
    //  }
    //  if(x>0){
    //     cout<<"statement 3"<<endl;
    //  }
    //  if(x==100){
    //     cout<<"statement 4"<<endl;
    //  }
    //  if(x>200){
    //     cout<<"statement 5"<<endl;
    //  }
    //  else{
    //     cout<<"No";
    //  }
    // if(x==10){
    //     cout<<"True"<<endl;
    //     cout<<"True 1"<<endl;
    //     cout<<"True 2"<<endl;
    // }

    // if-else-if statement
    // if(x==100){
    //     cout<<"Statement 1";
    // }else if(x>5){
    //     cout<<"Statement 2";
    // }else{
    //     cout<<"Statement 3";
    // }

    //if else ladder
    // int x = 20;
    // if (x==30){
    //     cout<<"Statement 1";
    // }else if(x<20){
    //     cout<<"Statement 3";
    // }else if(x>10){
    //     cout<<"Statement 4";
    // }else if(x==5){
    //     cout<<"Statement 5";
    // }else if(x<5){
    //     cout<<"Statement 6";
    // }else if(x==12){
    //     cout<<"Statement 7";
    // }
    // else{
    //     cout<<"dfault";
    // }
    // // Switch statement
    // char a;
    // cout<<"Enter any character"<<endl;
    // cin>>a;

    // switch(a){
    //     case 'a' : cout<<"Statement 1";
    //     break;

    //     case 'b' : cout<<"statement 2";  
    //     break;

    //     case 'c' : cout<<"statement 3";
    //     break;

    //     case 'd' : cout<<"Statement 4";
    //     break;

    //     case 'e' : cout<<"Statement 5";
    //     break;

    //     case 'f' : cout<<"Statement 6";
    //     break;
    //     default : cout<<"Statement";
    // }
    
    //Ternary operator(shorthand of if else)
    // int x;
    // string result;
    // cin>>x;
    // result = (x>33) ? "pass" : "fail";
    // cout<<result;

    // int n;
    // cin>>n;
    // if(n%2==0){
    //     cout<<"even"<<endl;
    // }else{
    //     cout<<"odd"<<endl;
    // }
    int salary;
    cout<<"Enter Rahul salary: ";
    cin>>salary;

    if (salary<2000){
        cout<<"shopping with riya\n";
    }else if(salary==5000){
        cout<<"shopping with parents\n";
    }else{
        cout<<"shopping with friends\n";
    }
    return 0;
}