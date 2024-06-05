#include <iostream>
using namespace std;

class DisjointSet {
public:
    vector<int> parent;

    DisjointSet(int size) {
        parent.resize(size);
        for (int i = 0; i < size; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] == x) {
            return x;
        }
        else {
            parent[x] = find(parent[x]);
            return parent[x];
        }
    }

    void union_(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            parent[rootX] = rootY;
        }
    }
};

int main() {

    return 0;
}
