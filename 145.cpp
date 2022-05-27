#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ifstream in("in.txt");
	ofstream out("out.txt");
    string x;
    int d;
    in >> x >> d;
    int a = 0;
    int b = 0;
    bool flag = 0;
    while (a < x.length()) {
        while (b < d && a < x.length()) {
            b = b * 10 + x[a] - '0';
            if (b < d && flag)
                out << 0;
            a++;
        }
        if (b < d and !flag) {
            out << 0;
            return 0;
        }
        if (b >= d)
            out << b / d;
        flag = 1;
        b %= d;
    }
}