#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "The Letter Pyramid Program" << endl;
	cout << "Enter a string: ";
	string user_input {};
	cin >> user_input;
	const size_t string_len = user_input.size();	// Determine length of string for layers of pyramid
//	Output the letter pyramid
	for (int i {0};i<string_len;i++) {
		int j {0};
		bool plus_inc {true};
		bool row_incomplete {true};
		while (row_incomplete) {
			cout << user_input[j];
			//	Adjust string character position or cut out of loop if row complete
			if (j == 0 && !plus_inc) {
				row_incomplete = false;
			}
			else {
				if (plus_inc) {
					if (j < i) {
						j++;
					}
					else if (i == 0) {
						row_incomplete = false;
					}
					else {
						plus_inc = false;
						j--;
					}
				}
				else {
						if (j > 0) {
							j--;
						}
				}
			
			}
		}
		cout << endl;
	}	
	
	return 0;
}
