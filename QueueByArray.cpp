#include <iostream>
using namespace std;

int front = 0, rear = 0, n = 5;
int queue[10], item, choice;

void enqueue(int);
void dequeue();
void peek();
void print();

int main()
{
    cout << "\n---Queue---\n";
    cout << "1. Enqueue()" << endl;
    cout << "2. Dequeue()" << endl;
    cout << "3. Peek()" << endl;
    cout << "4. Print()" << endl;
    cout << "5. Exit()" << endl;

    while (1)
    {
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the data : ";
            cin >> item;
            enqueue(item);
            cout << "\n";
            break;
        case 2:
            dequeue();
            break;

        case 3:
            peek();
            break;

        case 4:
            print();
            break;

        case 5:
            exit(0);
            break;

        default:
            cout << "Wrong Input" << endl;
            break;
        }
    }

    return 0;
}

void enqueue(int data)
{
    if ((front == 1 && rear == n) || (front == rear + 1))
    {
        cout << "Overflow \n";
        return;
    }
    if (front == 0)
    {
        front = 1;
        rear = 1;
    }
    else if (rear == n)
    {
        rear = 1;
    }
    else
    {
        rear = rear + 1;
    }
    queue[rear] = item;
    return;
}

void dequeue()
{
    if (front == 0)
    {
        cout << "Underflow \n" << endl;
        return;
    }

    item = queue[front];
    cout << item << " is deleted.\n\n";

    if (front == rear)
    {
        front = 0;
        rear = 0;
    }
    else if (front == n)
    {
        front = 1;
    }
    else
    {
        front = front + 1;
    }
    return;
}

void print()
{
    cout << "\nData : ";
    int i;
    if (front <= rear)
    {
        for (i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
    }
    else
    {
        for (i = front; i <= n; i++)
        {
            cout << queue[i] << " ";
        }
        for (i = 1; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
    }
    cout << "\n\n";
}

void peek()
{
    cout << "First element is : " << queue[front] << "\n\n";
}
