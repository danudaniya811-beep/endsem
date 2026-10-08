#include <iostream>
#include <queue>
using namespace std;
class Queue
{
    string player[5];
    int front, rear;

public:
    Queue()
    {
        front = 0;
        rear = -1;
    }

    void add()
    {
        string name;
        cout << "Enter player name: ";
        cin >> name;
        player[++rear] = name;
    }

    void enter()
    {
        if (front > rear)
            cout << "Queue is empty";
        else
            cout << player[front++] << " entered the game";
    }

    void display()
    {
        cout << "\nWaiting players: ";
        for (int i = front; i <= rear; i++)
            cout << player[i] << " ";
    }
};

int main()
{
    Queue q;

    q.add();
    q.add();
    q.add();

    q.display();

    cout << "\n";
    q.enter();

    cout << "\n";
    q.display();

    return 0;
}
