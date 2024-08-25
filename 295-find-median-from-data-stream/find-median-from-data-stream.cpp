#include <queue>
#include <vector>

class MedianFinder {
private:
    std::priority_queue<int> low; // Max-heap
    std::priority_queue<int, std::vector<int>, std::greater<int>> high; // Min-heap

public:
    MedianFinder() {}

    void addNum(int num) {
        if (low.empty() || num <= low.top()) {
            low.push(num);
        } else {
            high.push(num);
        }
        
        // Balance the heaps
        if (low.size() > high.size() + 1) {
            high.push(low.top());
            low.pop();
        } else if (high.size() > low.size()) {
            low.push(high.top());
            high.pop();
        }
    }

    double findMedian() {
        if (low.size() > high.size()) {
            return low.top();
        } else {
            return (low.top() + high.top()) / 2.0;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
