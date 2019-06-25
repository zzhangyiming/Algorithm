
#include "Queue/LinkedListQueue.h"
#include "iostream"
using  namespace std;

int main(){
    LinkedListQueue<string> *queue = new LinkedListQueue<string>();
    queue->enqueue("张一鸣");
    queue->enqueue("是");
    queue->enqueue("世界上最帅的人");
    queue->print();
    return 0;
}
