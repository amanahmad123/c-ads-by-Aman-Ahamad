#include <iostream>
using namespace std;
#define SIZE 10

class Queue{
  public: 
int data[SIZE];
int front, rear;

    void initialize(){
front = rear = -1;
}
bool isEmpty(){
         return front == -1;
    }
    bool isFull(){
    return rear == SIZE - 1;
   }
    
    void enqueue(int info){
        if(rear == SIZE - 1){
        cout<<"Queue is Full" << endl;
    return;
        }
        
        if(front == -1)
            front = front + 1;
rear = rear+ 1;
        data[rear]= info;
    }
    
    int dequeue(){
        int item;
if(front == -1){
            cout<<endl<<"queue is Empty" << endl;
            return -1;
        }
        
        item = data[front];
        if(front ==rear)
           front =rear = -1;
        else
            front= front + 1;

        return item;
    }
    
    void traverse(){
        if(isEmpty()){
            cout<<"queue is Empty"<<endl;
            return;
        }

        for (int i = front; i<= rear; i++){
            cout<<data[i]<<" ";
        }

        cout<<endl;
    }
};

int main(){
    
    Queue Q;
    Q.initialize();
    
    int ch, info;
    
    do{
         
        cout<<"\n1> Enqueue"
            <<"\n2> Dequeue"
            <<"\n3> Traverse"
            <<"\n4> isEmpty" 
            <<"\n5> isFull"
            <<"\n6> Exit"
            <<"\n Enter Your Choice: ";
         
        cin>>ch;

        switch(ch){
            case 1: 
                cout<<"Enter info: ";
                cin>>info;
                Q.enqueue(info);
                break;

    case 2:
     cout<<"Deleted element: "<<Q.dequeue()<<endl;
        break;

    case 3:
        Q.traverse();
        break;

case 4:
 if(Q.isEmpty())
 cout<<"Queue is Empty"<<endl;
 else
 cout<<"Queue is Not Empty"<<endl;
    break;

            case 5:
                if(Q.isFull())
                cout<<"Queue is Full"<<endl;
                else
                cout<<"Queue is Not Full"<<endl;
                break;

            case 6:
            cout<<"exit"<<endl;
            break;

            default:
                cout<<"invalid Choice"<<endl;
        }
         
    }while(ch != 6);

    return 0;
}







