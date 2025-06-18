// #include<iostream>
// using namespace std;
// const int  maximum=10;
//  int stack_arr[maximum];
// int top=-1; 
// void push(int data){
//     if(top==maximum-1){
//         cout<<"stack overflow"<<endl;
//         return;
//     }
//     top=top+1;
//     stack_arr[top]=data;
// }
// void pop(){
//     if(top==-1){
//         cout<<"stack underflow"<<endl;
//         exit(1);
//     }
//     cout<<"the element gonna be poppped "<<stack_arr[top]<<endl;
//     top=top+1;
// }
// void printInfo(){
//     if(top==-1){
//         cout<<"stack is empty"<<endl;
//         return;
//     }
//     for(int i=0;i<=top;i++){
//         cout<<stack_arr[i]<<endl;
//     }
// }
// int main(){
//     cout<<"welcome to stack overflow"<<endl;
//     push(1);
//     push(2);
//     printInfo();
//     return 0;
// }
#include<iostream>
using namespace std;
const int maximum=7;
int stack_arr[maximum];
int top=-1;
void push(int data){
    if(top==maximum-1){
        cout<<"stack overflow"<<endl;
        return;
    }
    top=top+1;
    stack_arr[top]=data;
}
void pop(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
        return;
    }
    cout<<"popped element: "<<stack_arr[top]<<endl;
    top=top-1;
}
void printInfo(){
    cout<<"our element"<<endl;
    if(top==-1){
        cout<<"this stack have not any data"<<endl;
        return;
    }
    for(int i=0;i<=top;i++){
        cout<<stack_arr[i]<<endl;
    }
}
int main(){
    cout<<"welcome to stack data structure"<<endl;
    push(6);
    push(8);
    push(17);
    pop();
    pop();
    push(9);
    printInfo();
    return 0;
}