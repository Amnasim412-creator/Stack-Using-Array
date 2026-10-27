#include <iostream>
using namespace std;

class Stack{
public:
    int stack[10];
    int top = -1;

    bool isempty(){
        return top ==-1;
    }
    bool isFull(){
        return top ==9;
    }

    int topValue(){
        return stack[top];
    }
    void push(int val){
        if(isFull()){
            cout<<"Stack is OverFlow";
            return;
        }else
        top++;
        stack[top] = val;

    }
void pop(){
if(top == -1){
    cout<<"Stack is Underflow";
    return;
}
else{
    top--;

}


}

void display(){
if(top ==-1){
    cout<<"Stack is empty ";
    return;
}else{
    for(int i = 0;i<=top ;i++){
        cout<<stack[i]<< " ";
    }

}

}
};


int main (){
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"Values in Stack is =";
    s.display();

    cout<<endl;

    s.pop();
    cout<<"Delete a value from top = ";
    s.display();

    cout<<endl;

    cout<<"Top value inside the stack is "<< s.topValue();

    return 0;
}
