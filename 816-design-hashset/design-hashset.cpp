class MyHashSet {
private:
    vector<bool> hash;

public:
    MyHashSet() {
        hash.resize(1e6 + 1, false);
    }

    void add(int key) {
        hash[key] = true;
    }

    void remove(int key) {
        hash[key] = false;
    }

    bool contains(int key) {
        return hash[key];
    }
};
