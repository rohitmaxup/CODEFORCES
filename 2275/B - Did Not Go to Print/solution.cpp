#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        stack<int> st;
        vector<int> printed(n + 1, 0);
 
        for (int i = 0; i < n; i++) {
            int doc = i + 1;
 
            if (s[i] == '1') {
                st.push(doc);
            }
        else if (s[i] == '2') {
            if (!st.empty()) {
                printed[st.top()] = 1;
                st.pop();
            }
        else {
            printed[doc] = 1;
        }
}
else {
    printed[doc] = 1;
}
}
 
vector<int> ans;
 
for (int i = 1; i <= n; i++) {
    if (printed[i] == 0) {
        ans.push_back(i);
    }
}
 
cout << ans.size() << '
';
 
for (int x : ans) {
    cout << x << ' ';
}
 
cout << '
';
}
 
return 0;
}