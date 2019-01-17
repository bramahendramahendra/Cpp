#include "cobaqueue.h"

void createQueue(arr_queue &q){
    q.head = -1;
    q.tail = -1;
}
bool isEmpty(arr_queue q){
    if (q.head==-1)
        return true;
    else
        return false;
}
bool isFull(arr_queue q){
    if (q.tail==4)//fatal
        return true;
    else
        return false;
}
void enqueue(int elm, arr_queue &q){
    if (isFull(q)){
        cout<<"FULL"<<endl;}
    else{
            if (isEmpty(q)){
                    q.head=0;
                    q.tail=0;
                    q.info[q.tail] = elm;
            }
            else{
                    q.tail = q.tail+1;
                    q.info[q.tail] = elm;
            }
    }
}

void enqueue2(int elm, arr_queue &q){
    if (q.tail==4 && q.head==0){
            cout<<"FULL"<<endl;
        }
    else{
        if (isEmpty(q))
        {
            q.head++;
            q.tail++;
            q.info[q.tail]=elm;
        }
        else if (q.tail==4 && q.head!=0){
            arr_queue p;
            p.head=0;
            p.tail=0;
            while (q.head!=5){
                p.info[p.tail]= q.info[q.head];
                p.tail++;
                q.head++;
            }
            p.info[p.tail]=elm;
            q=p;
        }
        else{
            q.tail = q.tail+1;
            q.info[q.tail] = elm;
        }
    }
}

void enqueue3(int elm, arr_queue &q){
    if ((q.tail+1 == q.head) || ((q.tail == 4) && (q.head == 0))){
            cout<<"FULL"<<endl;
    }
    else{
        if (isEmpty(q))
        {
            q.head++;
            q.tail++;
            q.info[q.tail]=elm;
        }

        else if (q.tail==4){
            q.tail=0;
            q.info[q.tail] = elm;
        }
        else{
            q.tail++;
            q.info[q.tail] = elm;
        }
    }
}

int dequeue(arr_queue &q){
    if (isEmpty(q)){
        cout<<"EMPTY"<<endl;}
    else{
        if (q.head!=q.tail){
                int p = q.info[q.head];
                int i = q.head+1;
                while(i<=q.tail){
                    q.info[i-1] = q.info[i];
                    i++;}
                q.tail--;
                return p;}
        else{
                int p = q.info[q.head];
                q.head--;
                q.tail--;
                return p;}
    }
}

void dequeue2(int &p, arr_queue &q)
{
    if (q.head==q.tail){
        cout<<"EMPTY"<<endl;}
    else{
            p = q.info[q.head];
            q.head++;
    }
}

void dequeue3(int &p, arr_queue &q)
{
    if (q.head==q.tail){
        cout<<"EMPTY"<<endl;}
    else if (q.head==4){
            p = q.info[q.head];
            q.head==0;
    }
    else{
            p = q.info[q.head];
            q.head++;
    }
}

void viewQueue(arr_queue &q){
    if (isEmpty(q)){
        cout<<"EMPTY"<<endl;}
    else{
        cout<<q.head
            <<q.tail
            <<endl;

        for(int i=q.head; i <= q.tail; i++){
                cout<<q.info[i]<<endl;}
    }
}

void viewQueue3(arr_queue &q)
{
    if (isEmpty(q)){
        cout<<"EMPTY"<<endl;}
     else if (q.head>q.tail)
      {
          cout<<q.head
            <<q.tail
            <<endl;
            for(int i=q.head; i <= 4; i++){
                cout<<q.info[i]<<endl;
            }
            for(int i=0; i <= q.tail; i++){
                cout<<q.info[i]<<endl;
            }
      }
    else{
        cout<<q.head
            <<q.tail
            <<endl;

        for(int i=q.head; i <= q.tail; i++){
                cout<<q.info[i]<<endl;}
    }
}

void splitQueue(arr_queue &q,arr_queue &r,arr_queue &s){
    while(not isEmpty(q)){
            int p = dequeue(q);
                if (p%2==0)
                    {
                        enqueue(p,s);
                    }
                else
                    enqueue(p,r);}
}
