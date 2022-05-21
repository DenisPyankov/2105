#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ifstream in("in.txt");
	ofstream out("out.txt");
    int n;
    in >> n;
    long x = pow(3, n / 3);
    if (n % 3 == 1)
        x = x * 4 / 3;
    if (n % 3 == 2)
        x = x * 2;
    out << x;
}