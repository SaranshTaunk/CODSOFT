#include<iostream>
using namespace std;
void operation(){
    float  num1,num2;
    char oprn;
    int time;
     cout<<"Enter how many operations you want to perform:"<<endl;//takes input on the no.of tasks the user wants to perform.
     cin>>time;
    while(time--){
        cout<<"Enter the first number:"<<endl;
    cin>>num1;
    cout<<"Enter the operation:"<<endl;
     cin>>oprn;
     cout<<"Enter the second number"<<endl;
     cin>>num2;
   
        if (oprn=='+'){
    cout<<"Addition of two numbers is:"<<num1+num2<<endl;
    
}
else if (oprn=='-'){
    cout<<"Subtraction of two number is :"<<num1-num2<<endl;
   
}
else if (oprn=='/'){
    cout<<"Division of two number is:"<<num1/num2<<endl;
  
}
else if(oprn=='*') {
    cout<<"Mutiplication of two numbers is: "<<num1*num2<<endl;
   
}
else{
    cout<<"Invalid choice"; 
}
    }

}


int main(){
    operation();
  return 0;
}
