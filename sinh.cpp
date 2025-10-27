#include <iostream>
#include <fstream>
#include <random>
#include <ctime>

using namespace std;

int main() {
	// Tạo file output
	ofstream fout(".INP");

	// Kiểm tra mở file thành công
	if (!fout.is_open()) {
		cerr << "Không thể mở file để ghi." << endl;
		return 1;
	}

	// Tạo bộ sinh số ngẫu nhiên
	mt19937_64 rng(time(0));
	// Sinh n trong [0, 1e6]
	uniform_int_distribution<long long> dist_n(0, 1e5);
	int n = dist_n(rng);

	fout << n << " " << n - 1 << "\n";

	// Sinh n số trong [0, 1e9]
	uniform_int_distribution<long long> dist_val(0, 1e9);
	for (int i = 0; i < n; ++i) {
		fout << dist_val(rng);
		if (i != n - 1) fout << " ";
	}
	fout << "\n";
	fout.close();

	cout << "Đã ghi file input.txt thành công!" << endl;

	return 0;
}
