class MyHashMap {
public:
    vector<int>arr;
    MyHashMap() {
        arr = vector<int> (1000001,-1);
    }
    
    void put(int key, int value) {
        arr[key]=value;
    }
    
    int get(int key) {
        if(arr[key]!=-1)
        return arr[key];
        else return -1;
    }
    
    void remove(int key) {
        if(arr[key]!=-1){
            arr[key]=-1;
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