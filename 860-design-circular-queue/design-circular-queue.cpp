class MyCircularQueue {
public:
    int front;
    int rear;
    int size;
    int* arr;
    
    MyCircularQueue(int k) {
        front=-1;
        rear=-1;
        size=k;
        arr=new int[size];
        
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        else if(front==-1){
            front=rear=0;
            arr[rear]=value;
            

        }
        else{
            rear=(rear+1)%size;
            arr[rear]=value;
        }
        
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        else if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            int element=arr[front];
            front=(front+1)%size;
        }
        return true;
        
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        int element=arr[front];
        return element;
        
    }
    
    int Rear() {
         if(isEmpty()){
            return -1;
        }
        int element=arr[rear];
        return element;
        
    }
    
    bool isEmpty() {
       if(front==-1){
            return true;
        }
        else{
            return false;
        } 
        
    }
    
    bool isFull() {
        if((front==0 && rear==size-1) || (rear+1)%size==front){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */