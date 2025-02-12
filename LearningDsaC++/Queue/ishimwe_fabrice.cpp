#include <iostream>
#include <queue>   // For priority_queue
#include <vector>  // For vector
#include <functional> // For greater (used for min-priority queue)

using namespace std;

class PriorityQueue {
private:
    priority_queue<int> maxQueue;  // Max-priority queue by default

public:
    // Insert operation (Enqueue)
    void insert(int element) {
        maxQueue.push(element);
    }

    // Delete operation (Dequeue)
    void deleteMax() {
        if (!maxQueue.empty()) {
            cout << "Removed: " << maxQueue.top() << endl;
            maxQueue.pop();
        } else {
            cout << "Queue is empty!" << endl;
        }
    }

    // Peek operation (Top/Front)
    void peek() {
        if (!maxQueue.empty()) {
            cout << "Max element: " << maxQueue.top() << endl;
        } else {
            cout << "Queue is empty!" << endl;
        }
    }

    // Check if the queue is empty
    bool isEmpty() {
        return maxQueue.empty();
    }

    // Get the size of the queue
    int size() {
        return maxQueue.size();
    }

    // Clear the queue
    void clear() {
        while (!maxQueue.empty()) {
            maxQueue.pop();
        }
        cout << "Queue cleared!" << endl;
    }

    // Display the elements (for debugging purposes)
    void display() {
        priority_queue<int> tempQueue = maxQueue; // Copy to avoid modifying the original queue
        cout << "Queue elements: ";
        while (!tempQueue.empty()) {
            cout << tempQueue.top() << " ";
            tempQueue.pop();
        }
        cout << endl;
    }
};

class MinPriorityQueue {
private:
    priority_queue<int, vector<int>, greater<int>> minQueue;  // Min-priority queue

public:
    // Insert operation (Enqueue)
    void insert(int element) {
        minQueue.push(element);
    }

    // Delete operation (Dequeue)
    void deleteMin() {
        if (!minQueue.empty()) {
            cout << "Removed: " << minQueue.top() << endl;
            minQueue.pop();
        } else {
            cout << "Queue is empty!" << endl;
        }
    }

    // Peek operation (Top/Front)
    void peek() {
        if (!minQueue.empty()) {
            cout << "Min element: " << minQueue.top() << endl;
        } else {
            cout << "Queue is empty!" << endl;
        }
    }

    // Check if the queue is empty
    bool isEmpty() {
        return minQueue.empty();
    }

    // Get the size of the queue
    int size() {
        return minQueue.size();
    }

    // Clear the queue
    void clear() {
        while (!minQueue.empty()) {
            minQueue.pop();
        }
        cout << "Queue cleared!" << endl;
    }

    // Display the elements (for debugging purposes)
    void display() {
        priority_queue<int, vector<int>, greater<int>> tempQueue = minQueue; // Copy to avoid modifying the original queue
        cout << "Queue elements: ";
        while (!tempQueue.empty()) {
            cout << tempQueue.top() << " ";
            tempQueue.pop();
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue maxPQ;
    MinPriorityQueue minPQ;

    // Inserting elements into max-priority queue
    maxPQ.insert(10);
    maxPQ.insert(20);
    maxPQ.insert(15);
    maxPQ.insert(5);

    // Inserting elements into min-priority queue
    minPQ.insert(10);
    minPQ.insert(20);
    minPQ.insert(15);
    minPQ.insert(5);

    // Display max-priority queue
    cout << "Max Priority Queue: ";
    maxPQ.display();

    // Display min-priority queue
    cout << "Min Priority Queue: ";
    minPQ.display();

    // Peek the top element in both queues
    maxPQ.peek();
    minPQ.peek();

    // Deleting the max element from max-priority queue
    maxPQ.deleteMax();

    // Deleting the min element from min-priority queue
    minPQ.deleteMin();

    // Display after deletions
    cout << "Max Priority Queue after deletion: ";
    maxPQ.display();

    cout << "Min Priority Queue after deletion: ";
    minPQ.display();

    // Check if queues are empty
    cout << "Max Priority Queue is empty: " << maxPQ.isEmpty() << endl;
    cout << "Min Priority Queue is empty: " << minPQ.isEmpty() << endl;

    // Get the size of both queues
    cout << "Max Priority Queue size: " << maxPQ.size() << endl;
    cout << "Min Priority Queue size: " << minPQ.size() << endl;

    // Clear both queues
    maxPQ.clear();
    minPQ.clear();

    // Check if queues are empty after clearing
    cout << "Max Priority Queue is empty after clear: " << maxPQ.isEmpty() << endl;
    cout << "Min Priority Queue is empty after clear: " << minPQ.isEmpty() << endl;

    return 0;
}
