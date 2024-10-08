#include<iostream>
#include<string>
using namespace std;
int main() {
	int row, col,tmp;
	int raw[100][100];
	int ans[100][100];
	while (cin >> row >> col) {
		for (int i = 0; i < row; i++) {
			for (int g = 0; g < col; g++) {
				cin >> tmp;
				raw[i][g] = tmp;
			}
		}
		for (int i = 0; i < row; i++) {
			for (int g = 0; g < col; g++) {
				ans[g][i] = raw[i][g];
			}
		}
		for (int i = 0; i < col; i++) {
			for (int g = 0; g < row; g++) {
				cout << ans[i][g];
				cout << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
