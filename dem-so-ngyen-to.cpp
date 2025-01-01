#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	vector <vector<double>> matA(m, vector<double>(n));
	vector <vector<double>> matB(m, vector<double>(n));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matA[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matB[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << fixed << setprecision(2) << matA[i][j] + matB[i][j] << " ";
		}
		cout << '\n';
	}
}