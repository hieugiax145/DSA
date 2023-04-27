#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int main() { 
// freopen("input.txt", "r", stdin);
 // freopen("output.txt", "w", stdout); 
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0); 
	stack<ll> st; 
	string s;
	while (cin >> s) { 
		ll n; 
		if (s == "push") {
			cin >> n; 
			cin.ignore(); 
			st.push(n); 
		} 
		else if (s == "pop") { 
			if (!st.empty()) { 
				st.pop(); 
			} 
			else { 
				cout << "empty" << endl; 
				break; 
			} 
		} 
		else { 
			if (st.empty()) { 
				cout << "empty" << endl; 
				break; 
			}
			vector<ll> v; 
			while (!st.empty()) { 
				ll top = st.top(); 
				v.push_back(top); 
				.pop(); 
			} 
			for (int i = v.size() - 1; i >= 0; i--) { 
				st.push(v[i]); cout << v[i] << " "; 
			} 
			cout << endl; 
		} 
	} 
}