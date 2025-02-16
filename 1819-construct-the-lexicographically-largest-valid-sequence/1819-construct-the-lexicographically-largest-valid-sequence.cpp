class Solution {
public:
    vector<int> constructDistancedSequence(int n) {
        int size = (n == 1) ? 1 : 2 * n - 1;
        ans.assign(size, 0);
        used.assign(n + 1, false);
        this->n = n;
        dfs(0, size);
        return ans;
    }
    
private:
    int n;
    vector<int> ans;
    vector<bool> used;
    
    bool dfs(int pos, int size) {
        if (pos == size)
            return true;
        if (ans[pos] != 0)
            return dfs(pos + 1, size);
        for (int num = n; num >= 1; num--) {
            if (used[num])
                continue;
            if (num == 1) {
                ans[pos] = 1;
                used[1] = true;
                if (dfs(pos + 1, size))
                    return true;
                used[1] = false;
                ans[pos] = 0;
            } else {
                int j = pos + num;
                if (j >= size || ans[j] != 0)
                    continue;
                ans[pos] = num;
                ans[j] = num;
                used[num] = true;
                if (dfs(pos + 1, size))
                    return true;
                ans[pos] = 0;
                ans[j] = 0;
                used[num] = false;
            }
        }
        return false;
    }
};
