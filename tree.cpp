#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5;  
int tree[2 * MAXN];

class SegTree {
    int n;
    int init = 0;

    public:
    SegTree(vector<int> &arr) { 
        n = arr.size();
        for (int i = 0; i < n; i++)
            tree[i + n] = arr[i];

        for (int i = n - 1; i > 0; --i) 
            tree[i] = combine(tree[i<<1], tree[i<<1|1]);
    }

    void update(int p, int value) { 
        for (tree[p += n] = value; p > 1; p >>= 1) tree[p>>1] = combine(tree[p], tree[p^1]);
    }

    int combine(int node1, int node2) {
        return abs(node1 - node2);
    }

    int query(int l, int r) {  // [l, r]
        int res = init;
        l--;
        for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
            if (l&1) res = combine(res, tree[l++]);
            if (r&1) res = combine(res, tree[--r]);
        }
        return res;
    }
};

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    SegTree stree(arr);

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout<<stree.query(l, r)<<"\n";
    }
}
