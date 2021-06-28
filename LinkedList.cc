/*
链表：在物理结构上不连续，使用指针相连的存储结构
*/

#include <iostream>

// define Linked list structure
typedef struct Link {
    int data;
    struct Link* next;
    Link(int n) : data(n), next(nullptr) { }
}link;

// define Linked list class
class LinkedList {
public:
    link* header; // define Link head pointer
    link* first_hd; // define Link first node pointer

    link* initList(); // init list
    int get(int index); // get node at index, if not found, return -1
    void addAtIndex(int index, int val); // add new node at index
    void addAtHead(int val); // add new node at Link head
    void addAtTail(int val); // add new node at Link tail
    void delAtIndex(int index); // delete node
    void displayList(link* p_header); // retrieve Link and display all nodes

};

link* LinkedList::initList() {
    // define link header pointer
    link* p_header = NULL;
    // define link first node
    link* p_first = (link*)malloc(sizeof(link));
    p_header = p_first;

    return p_header;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
