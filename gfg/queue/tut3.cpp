// Implementations of queue using array;

//   _____________________________
//   |   |      |  |           |  |
//   |   |      |  |           |  |
//   |___|______|__|___________|__|
//    front   rear=size-1       cap-1

//   _____________________________
//   |    |     |     |     |     |  cap =5
//   |    |     |     |     |     |   size =0
//   |____|_____|_____|_____|_____|

// enqueue(10)
//   _____________________________
//   |    |     |     |     |     |
//   |10  |     |     |     |     | size=1 f=0 r=0
//   |____|_____|_____|_____|_____|

// enqueue(20),enqueue(30)
//   _____________________________
//   |    |     |     |     |     |  size=3 f=0 r=2
//   |10  |20   |30   |     |     |
//   |____|_____|_____|_____|_____|

// dequeue()
//   _____________________________
//   |    |     |     |     |     |
//   |20  |30   |     |     |     |size =2 f=0 r=1
//   |____|_____|_____|_____|_____|

struct Queue
{
    int size, cap;
    int *arr;
    Queue(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isFull() { return (size == cap); }
    bool isEmpty() { return (size == 0); }
    void enque(int x)
    {
        if (isFull())
            return;
        arr[size] = x;
        size++;
    }
    void dequeue()
    {
        if (isEmpty())
            return;
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    int getFront()
    {
        if (isEmpty())
            return -1;
        else
            return 0;
    }
    int getRear()
    {
        if (isEmpty())
            return -1;
        else
            return size - 1;
    }
};

//   ________________________
//   |    |     |     |     |
//   |10  |20   |30   | 40  | size =4 cap=4 front=0
//   |____|_____|_____|_____|
//     front            rear

// dequeue
//   ________________________
//   |    |     |     |     |
//   |    |20   |30   | 40  | size =3 cap=4 front=1
//   |____|_____|_____|_____|
//        front         raer

//  dequeue
//   ________________________
//   |    |     |     |     |
//   |    |     |30   | 40  | size =2 cap=4 front=2
//   |____|_____|_____|_____|
//                front   raer

//  enqueue(50)
//   ________________________
//   |    |     |     |     |
//   | 50 |     |30   | 40  | size = cap=4 front=2
//   |____|_____|_____|_____|
//      rear        front   raer

// Efficient method->circular Array;
struct Queue2
{
    int *arr;
    int front, cap, size;
    Queue2(int c)
    {
        arr = new int[c];
        cap = c;
        front = 0;
        size = 0;
    }
    bool isFull() { return (size == cap); }
    bool isEmpty() { return (size == 0); }

    int getfront()
    {
        if (isEmpty())
            return -1;
        else
            return front;
    }
    int getRear()
    {
        if (isEmpty())
            return -1;
        else
        {
            return (front + size - 1) % cap;
        }
    }
    void enqueue(int x)
    {
        if (isFull())
            return;
        int rear = getRear();
        rear = (rear + 1) % cap;
        size++;
    }
    void dequeue(int x)
    {
        if (isEmpty)
            return;

        front = (front + 1) % cap;
        size--;
    }
};