#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ifstream in("in.txt");
	ofstream out("out.txt");
	int N, nAB, nBC, nAC;
	cin >> N >> nAB >> nBC >> nAC;
	int x = min(min(nAB, nAC), nBC) / 2;
	vector <int> v(6, 0);
    for (int i = 0; i < 6; i += 2)
        v[i] = x;
    int a = x * 2;
    nAB -= a;
    nBC -= a;
    nAC -= a;
    N -= nAB + nBC + nAC;
    N -= x * 3;
    v[1] = nAB;
    v[3] = nBC;
    v[5] = nAC;
    if (nAB == 0 && nBC == 0 && nAC == 0 && N == 0) {
        cout << "YES" << endl;
        for (int i : v)
            cout << i << " ";
    }
    else
        cout << "NO";
}