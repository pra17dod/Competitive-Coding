class MyHashSet {
public:
    vector <int> vec;
    
    MyHashSet() {
    }
    
    void add(int key) {
        auto it = find(vec.begin(), vec.end(), key);
        if (it == vec.end())
            vec.push_back(key);
    }
    
    void remove(int key) {
        auto it = find(vec.begin(), vec.end(), key);
        if (it != vec.end())
        vec.erase(it);
    }
    
    bool contains(int key) {
        auto it = find(vec.begin(), vec.end(), key);
        if (it == vec.end()) 
            return false;
        else return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */