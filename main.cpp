
#include "LinkedList/LinkedList.h"
#include<time.h>
#include "iostream"
using  namespace std;

int main(){
    LinkedList<int> *linkedList = new LinkedList<int>();
    for(int i = 1;i<=9;i++){
        linkedList->addLast(rand()%(100));
    }
    linkedList->print();
    return 0;
}
