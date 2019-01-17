#include "cobaqueue.h"

int main()
{
    int p = 0;
    arr_queue ii;
//    arr_queue rr;
//    arr_queue mm;
    createQueue(ii);
//    createQueue(rr);
//    createQueue(mm);
    enqueue2(2,ii);
    viewQueue(ii);
    cout<<endl;
    enqueue2(8,ii);
    viewQueue(ii);
    cout<<endl;
    enqueue2(1,ii);
    viewQueue(ii);
    cout<<endl;
    enqueue2(4,ii);
    viewQueue(ii);
    cout<<endl;
    enqueue2(5,ii);
    viewQueue(ii);
    cout<<endl;

    dequeue2(p,ii);
    cout<<"deleted = "<<p<<endl;
    viewQueue(ii);
    cout<<endl;
    cout<<endl;

    dequeue2(p,ii);
    cout<<"deleted = "<<p<<endl;
    viewQueue(ii);
    cout<<endl;
    cout<<endl;

    enqueue2(2,ii);
    viewQueue(ii);
    cout<<endl;

    dequeue2(p,ii);
    cout<<"deleted = "<<p<<endl;
    viewQueue(ii);
    cout<<endl;
    cout<<endl;

    dequeue2(p,ii);
    cout<<"deleted = "<<p<<endl;
    viewQueue(ii);
    cout<<endl;
    cout<<endl;


/*    cout<<"SPLIT"<<endl;
    splitQueue(ii,rr,mm);
    cout<<"queue asli"<<endl;
    viewQueue(ii);
    cout<<"odd"<<endl;
    viewQueue(rr);
    cout<<"even"<<endl;
    viewQueue(mm);*/
    return 0;
}
