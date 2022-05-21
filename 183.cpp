#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ifstream in("in.txt");
	ofstream out("out.txt");
	int k, p;
	cin >> k >> p;
	vector<int> v(k + 1);
	v[2] = 1;
	for (int i = 2; i < k; i++) {
		v[i + 1] = (v[i + 1] + v[i]) % p;
		if (2 * i <= k) 
			v[2 * i] = v[i];
	}
	cout << v[k];
}