#include <bits/stdc++.h>
#define INF 2000000000
using namespace std;
typedef long long ll;
int read(){
    int f = 1, x = 0;
    char c = getchar();
    while(c < '0' || c > '9'){if(c == '-') f = -f; c = getchar();}
    while(c >= '0' && c <= '9')x = x * 10 + c - '0', c = getchar();
    return f * x; 
}

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isLeaf(TreeNode* root) {
    return root->left == NULL && root->right == NULL;
}

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        unordered_set<int> st;
        int n = fronts.size(), ans = INT_MAX;
        for (int i = 0; i < n; ++i)
            if (fronts[i] == backs[i])
                st.insert(fronts[i]);
        for (int i = 0; i < n; ++i){
            if (fronts[i] == backs[i]) continue;
            if (!st.count(fronts[i]))
                ans = min(ans, fronts[i]);
            if (!st.count(backs[i]))
                ans = min(ans, backs[i]);
        }
        return ans == INT_MAX ? 0: ans;
    }
};
Solution sol;
void init(){
    
}
void solve(){
    // sol.convert();
}
int main(){
    init();
    solve();
    return 0;
}
