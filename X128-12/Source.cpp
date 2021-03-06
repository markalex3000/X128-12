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

	cout << "Enter the max value: ";
	cin >> max;

	// Initialize the vector of numbers

	for (int i = 0; i < max; i++)
	{
		t_nums.push_back(true);
	}

	// set values for i = 0 and i = 1 to false

	t_nums[0] = false;
	t_nums[1] = false;
	
	for (index = 1; index * index < max;) {
		//find next prime
		for (int i = index+1; i < max;i++) {
			if (t_nums[i] == true) {
				jump = i;
				index = jump;
//				cout << "i = " << i << "\n";
//				cout << "jump = " << jump << "\n";
//				cout << "index = " << index << "\n";
				break;
			}
		}
		// mark multiples false
		for (int i = index + jump ; i < max; i += jump) {
			t_nums[i] = false;
			}
//		for (int i = 0;i < max;i++) {
//			if (i % 10 == 0) cout << "\n";
//			if (t_nums[i] == true) cout << i << "\t";
//			else cout << "XX\t";
//		}
//		keep_window_open();
	}
	for (int i = 0;i < max;i++) {
		if (t_nums[i] == true) {
			primes.push_back(i);
			cout << i << "\n";
			
			
		}
	}
	keep_window_open();
}