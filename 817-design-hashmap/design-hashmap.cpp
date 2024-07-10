using namespace std;
class MyHashMap {
public:
    vector<vector<int>> hashmap;
    // vector<int> value;
    MyHashMap() {
// hashmap.push_back(std::vector<int>()); 
    }
    
    void put(int key, int value) 
    {
        for(int i=0;i<size(hashmap);i++)
        {
            if(hashmap[i][0]==key)
            {
                hashmap[i][1]=value;
                return;
            }
        }
        vector<int> val={key,value};
        hashmap.push_back(val);
    }
    
    int get(int key) 
    {
    if(hashmap.size()==0)
    return -1;
    for(int i=0;i<size(hashmap);i++)
        {
            if(hashmap[i][0]==key)
            {
                // hashmap[i]=value;
                return hashmap[i][1]; 
            }
        }
        return -1;    
    }
    
    void remove(int key) {
    if(hashmap.size()==0)
    return;
    for(int i=0;i<size(hashmap);i++)
    {
            if(hashmap[i][0]==key)
            {
                hashmap.erase(hashmap.begin() + i);
                break;
                // if(i!=size(hashmap)-1)
                // hashmap[i]=hashmap[i+1];
                // hashmap[i]=value;
                // return hashmap[i][1]; 
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */