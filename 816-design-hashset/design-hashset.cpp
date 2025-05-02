class MyHashSet {
private:
    vector<bool> hashTable;

public:
    MyHashSet() {
        hashTable.resize(1'000'001, false);  // Initialize all to false
    }
    
    void add(int key) {
        hashTable[key] = true;
    }
    
    void remove(int key) {
        hashTable[key] = false;
    }
    
    bool contains(int key) {
        return hashTable[key];
    }
};
