/*

The structure of the class is
class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};
 */

void MyQueue ::push(int x) {
    arr[rear % 100005] = x;  
    rear++;                 
}


int MyQueue ::pop() {
    if (front == rear) { 
        return -1;
    }
    int val = arr[front % 100005];  
    front++;                     
    return val;
}
