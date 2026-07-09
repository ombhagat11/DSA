class Node {
public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
    Node *start, *end;
    int cnt;

public:
    myQueue() {
        start = NULL;
        end = NULL;
        cnt = 0;
    }

    bool isEmpty() {
        return start == NULL;
    }

    void enqueue(int x) {
        Node* temp = new Node(x);

        if (start == NULL) {
            start = end = temp;
        } else {
            end->next = temp;
            end = temp;
        }

        cnt++;
    }

    void dequeue() {
        if (start == NULL)
            return;

        Node* temp = start;
        start = start->next;

        if (start == NULL)
            end = NULL;

        delete temp;
        cnt--;
    }

    int getFront() {
        if (start == NULL)
            return -1;

        return start->data;
    }

    int size() {
        return cnt;
    }
};