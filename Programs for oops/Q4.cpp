#include <iostream>
using namespace std;
class STACK{
    int stack[100],n,top=-1;
    public:
        STACK(int size){
            n=size;
        }
        void push(int);
        void pop();
        void display();
};
void STACK :: push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;  }
}
void STACK :: pop() {
   if(top<=-1)
   cout<<"\nStack Underflow"<<endl;
   else {
      cout<<"\nThe popped element is "<< stack[top] <<endl;
      top--; }
}
void STACK :: display() {
   if(top>=0) {
      cout<<"\nStack elements are: ";
      for(int i=0; i<=top; i++)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"\nStack is empty";
}
int main() {
    cout << "08113202721 , GAGANDEEP KAUR , CSE-2(A)";
    int ch,val,size;
    cout<<"\nEnter the size of stack: ";
    cin>>size;
    STACK s(size);
    while(1){
                                                                                                                                                            
        cout<<"\n1.PUSH"<<endl;
        cout<<"2.POP"<<endl;
        cout<<"3.DISPLAY"<<endl;
        cout<<"4.EXIT"<<endl;
        cout<<"Enter choice : ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Enter the value to be pushed: ";
                cin>>val;
                cout<<"\nBefore pushing element the stack is: ";
                s.display();
                s.push(val);
                cout<<"\nAfter pushing element the stack is: ";
                s.display();
                break;
            case 2:
                cout<<"\nBefore popping the last element the stack is: ";
                s.display();
                s.pop();
                cout<<"\nAfter popping the last element the stack is: ";
                s.display();
                break;
            case 3:
                s.display();
                break;
            case 4:
                exit(1);
                break; 
            default: 
                                                                                                                                                                
	cout<<"Enter a valid choice"<< endl;
	cout<<"Quiting.."<< endl;

     exit(1);
        }
   }
   return 0;
}
