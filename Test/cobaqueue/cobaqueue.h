#ifndef COBAQUEUE_H_INCLUDED
#define COBAQUEUE_H_INCLUDED
#include <iostream>

using namespace std;

struct arr_queue{
    int info[5];
    int head,tail;
};

void createQueue(arr_queue &q);
bool isEmpty(arr_queue q);
bool isFull(arr_queue q);
void enqueue(int elm, arr_queue &q);
void enqueue2(int elm, arr_queue &q);
void enqueue3(int elm, arr_queue &q);
int dequeue(arr_queue &q);
void dequeue2(int &p, arr_queue &q);
void dequeue3(int &p, arr_queue &q);
void viewQueue(arr_queue &q);
void viewQueue3(arr_queue &q);
void splitQueue(arr_queue &q,arr_queue &r,arr_queue &s);


#endif // COBAQUEUE_H_INCLUDED
