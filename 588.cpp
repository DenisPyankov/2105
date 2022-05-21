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
    if (n == 1 || n == 2 || n == 3 || n == 6) {
        cout << -1;
        return 0;
    }
    else if (n == 4) {
        cout << 2 << endl << 1 << endl << 0 << endl << 1;
        return 0;
    }
    else if (n == 5) {
        cout << 1 << endl << 2 << endl << 0 << endl << 0 << endl << 2;
        return 0;
    }
    else {
        vector<int> v(n);
        v[0] = 2;
        v[1] = 1;
        v[n - 5] = 1;
        v[n - 1] = n - 4;
        for (int i : v)
            cout << i << endl;
    }
}