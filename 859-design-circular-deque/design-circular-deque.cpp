class MyCircularDeque {
public:
    deque<int> q;
    int capacity;

    MyCircularDeque(int k) {
        capacity = k;
    }

    bool insertFront(int value) {
        if (isFull())
            return false;

        q.push_front(value);
        return true;
    }

    bool insertLast(int value) {
        if (isFull())
            return false;

        q.push_back(value);
        return true;
    }

    bool deleteFront() {
        if (isEmpty())
            return false;

        q.pop_front();
        return true;
    }

    bool deleteLast() {
        if (isEmpty())
            return false;

        q.pop_back();
        return true;
    }

    int getFront() {
        if (isEmpty())
            return -1;

        return q.front();
    }

    int getRear() {
        if (isEmpty())
            return -1;

        return q.back();
    }

    bool isEmpty() {
        return q.empty();
    }

    bool isFull() {
        return q.size() == capacity;
    }
};