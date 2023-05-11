#include <iostream>
#include <string> 
#include <algorithm>
#include <cmath>

static bool solve(const std::string &s, const std::string &t, int k) {
	const auto n = s.length();
	const auto m = t.length();
	int length = 0;

	while (length < m && length < n && s[length] == t[length]) {
		length++;
	}

	auto deleteCount = n - length;
	auto appendCount = m - length;

	if (deleteCount + appendCount > k) {
		return false;
	}
	else if (n + m <= k) {
		return true;
	}

	return (k - (deleteCount + appendCount)) % 2 == 0;
}

std::string ConcatRemove(std::string s, std::string t, int k)
{
	if (k >= t.size() + s.size()) return "Yes";
	int same = std::min(t.size(), s.size());
	for (int i = 0; i< std::min(t.size(), s.size()); i++) {
		if (s[i] != t[i]) {
			same = i;
			break;
		}
	}
	k -= (s.size() - same);
	k -= (t.size() - same);
	return (k >= 0 && k % 2 == 0) ? "Yes" : "No";
}
int main() {
	std::string s;
	std::string t;
	std::string output;
	int k{};

	s = "bla bla bla bla";
	t = "blablabcde";
	k = 8;

	output = ConcatRemove(s, t, k);
	return 0;
}
