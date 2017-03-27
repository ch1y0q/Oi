#include <iostream>
#include <algorithm>
#define INF 2147483647
using namespace std;

int main() {
	int height[30010], size = 1;
	while (cin >> height[size]) size++;
	int a[size], dp[size], result = 0, _max = 0;
	
	// 第一问 (最长下降子序列)
	for (int i = 0; i < size; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++)
			if (height[j] >= height[i])
				dp[i] = max(dp[i], dp[j] + 1);
		_max = max(_max, dp[i]);
	}
	
	// 第二问 (贪心)
	a[result] = height[1];
	for (int i = 1; i < size; i++) {
		int tmp = 0;
		for (int j = 1; j <= result; j++)
			if (a[j] >= height[i] && (tmp == 0 || a[j] < a[tmp]))
				tmp = j;
		if (tmp == 0) {
			result++;
			a[result] = height[i];
		}
		else
			a[tmp] = height[i];
	}
	
	cout << _max << endl << result << endl;
	return 0;
}