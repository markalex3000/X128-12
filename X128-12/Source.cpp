// find prime numbers using the Sieve of Eratosthenes

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

inline void simple_error(string s)	// write ``error: s and exit program
{
	cerr << "error: " << s << '\n';
	keep_window_open();		// for some Windows environments
	exit(1);
}

int main() {
	int max{ 0 };
	int index{ 0 };
	int jump{ 0 };
	vector<bool> t_nums;
	vector<int> primes;
}