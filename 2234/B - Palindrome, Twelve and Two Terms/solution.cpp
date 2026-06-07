#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
 
using namespace std;
 
int p10[19];
int memo[10][2][12];
string H_max;
int L, m, target_mod;
 
bool dfs(int idx, bool tight, int cur_mod, string& res) {
    if (idx == m) return cur_mod == target_mod;
    if (memo[idx][tight][cur_mod] == 0) return false;
 
    int limit = tight ? (H_max[idx] - '0') : 9;
    int start_d = (idx == 0 && L > 1) ? 1 : 0;
 
    for (int d = limit; d >= start_d; --d) {
        int contrib;
        if (idx == L - 1 - idx)
            contrib = (d * p10[idx]) % 12;
        else
            contrib = (d * p10[idx] + d * p10[L-1-idx]) % 12;
 
        int next_mod = (cur_mod + contrib) % 12;
        bool next_tight = tight && (d == limit);
 
        string suffix;
        if (dfs(idx+1, next_tight, next_mod, suffix)) {
            res = to_string(d) + suffix;
            return true;
        }
    }
 
    memo[idx][tight][cur_mod] = 0;
    return false;
}
 
void solve() {
    long long n;
    cin >> n;
    string n_str = to_string(n);
    target_mod = n % 12;
 
    for (L = n_str.size(); L >= 1; L--) {
        m = (L+1) / 2;
 
        if (L == (int)n_str.size()) {
            string H_prefix = n_str.substr(0, m);
            string P = H_prefix;
 
            if (L % 2 == 0) {
                string rev = H_prefix;
                reverse(rev.begin(), rev.end());
                P += rev;
            } else {
                string rev = H_prefix.substr(0, m-1);
                reverse(rev.begin(), rev.end());
                P += rev;
            }
 
            if (P <= n_str) {
                H_max = H_prefix;
            } else {
                long long h_val = stoll(H_prefix) - 1;
                H_max = to_string(h_val);
                while ((int)H_max.size() < m)
                    H_max = "0" + H_max;
            }
        } else {
            H_max = string(m, '9');
        }
 
        memset(memo, -1, sizeof(memo));
        string ans_half;
 
        if (dfs(0, L == (int)n_str.size(), 0, ans_half)) {
            string A_str = ans_half;
            if (L % 2 == 0) {
                string rev = ans_half;
                reverse(rev.begin(), rev.end());
                A_str += rev;
            } else {
                string rev = ans_half.substr(0, m-1);
                reverse(rev.begin(), rev.end());
                A_str += rev;
            }
            long long a = stoll(A_str);
            cout << a << " " << (n - a) << "
";
            return;
        }
    }
 
    cout << "-1
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    p10[0] = 1;
    for (int i = 1; i <= 18; i++)
        p10[i] = p10[i-1] * 10 % 12;
 
    int t;
    cin >> t;
    while (t--)
        solve();
 
    return 0;
}