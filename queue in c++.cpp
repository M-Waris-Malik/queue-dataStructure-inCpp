#include <iostream>
using namespace std;
#define n 5
class queue{
private:
	int* arr;
	int front, rear;
public:
	queue(){
	arr=new int[5];
	front = -1;
	rear = -1;
	}
void enqueue(int x){
if(rear ==n-1){
cout<<"Queue is full"<<endl;
}
rear++;
arr[rear] = x;

if(front==-1){
front++;
}
}

void dequeue(){
if(front==-1 || front > rear){
cout<<"no Value In Queue"<<endl;
}
front++;
}

bool empty(){
if(front==-1 || front > rear){
cout<<"no Value In Queue"<<endl;
return true;
}
return false;
}

int peek(){
if(front==-1 || front > rear){
cout<<"no Value In Queue"<<endl;
}
return arr[front];
}
};

int main(){
queue q;

q.enqueue(5);
q.enqueue(3);
q.enqueue(6);
q.enqueue(8);
q.enqueue(1);

cout<<"Check Empty"<<endl;
cout<<q.empty()<<endl;

cout<<"Check Peek"<<endl;
cout<<q.peek()<<endl;
q.dequeue();

cout<<"Check Peek"<<endl;
cout<<q.peek()<<endl;
q.dequeue();

cout<<"Check Peek"<<endl;
cout<<q.peek()<<endl;
q.dequeue();

cout<<"Check Peek"<<endl;
cout<<q.peek()<<endl;
q.dequeue();
cout<<"Check Peek"<<endl;
cout<<q.peek()<<endl;
q.dequeue();

cout<<"Check Empty"<<endl;
cout<<q.empty()<<endl;
}
