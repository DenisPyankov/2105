#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ifstream in("in.txt");
	ofstream out("out.txt");
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		int c, d;
		cin >> c >> d;
		bool flag = 0;
		while (b != 0) {
			if (b > a) {
				swap(a, b);
			}
			if (a == c && b == d) {
				flag = 1;
			}
			a = a - b;
			if (a == c && b == d) {
				flag = 1;
			}
		}
		if (flag) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;;
		}
	}
}