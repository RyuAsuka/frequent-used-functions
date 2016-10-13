#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	ifstream file("train");
	string label, predi;
	int m[4], n[4], p[4], q[4], c[4], d[4], e[4], f[4];
	for (int i = 0; i < 4; i++) {
		m[i] = n[i] = 0;
		p[i] = q[i] = 0;
		c[i] = d[i] = 0;
		e[i] = f[i] = 0;
	}
	int i = 0;
	string s1 = "", s2 = "";
	if (file.is_open()) {
		cout << "open!" << endl;
		while (getline(file, label) && getline(file, predi)) {
			//cout << predi.substr(predi.size()-1,1) << endl;
			s1 = label.substr(label.size() - 1, 1);
			s2 = predi.substr(predi.size() - 1, 1);
			cout << i++ << endl;
			if (atoi(s1.c_str()) == 1) {
				m[0] = m[0] + 1;
				if (atoi(s2.c_str()) == 1)
					n[0] = n[0] + 1;
				if (atoi(s2.c_str()) == 2)
					n[1] = n[1] + 1;
				if (atoi(s2.c_str()) == 3)
					n[2] = n[2] + 1;
				if (atoi(s2.c_str()) == 4)
					n[3] = n[3] + 1;
			}

			if (atoi(s1.c_str()) == 2) {
				p[1] = p[1] + 1;
				if (atoi(s2.c_str()) == 1)
					q[0] = q[0] + 1;
				if (atoi(s2.c_str()) == 2)
					q[1] = q[1] + 1;
				if (atoi(s2.c_str()) == 3)
					q[2] = q[2] + 1;
				if (atoi(s2.c_str()) == 4)
					q[3] = q[3] + 1;
			}

			if (atoi(s1.c_str()) == 3) {
				c[2] = c[2] + 1;
				if (atoi(s2.c_str()) == 1)
					d[0] = d[0] + 1;
				if (atoi(s2.c_str()) == 2)
					d[1] = d[1] + 1;
				if (atoi(s2.c_str()) == 3)
					d[2] = d[2] + 1;
				if (atoi(s2.c_str()) == 4)
					d[3] = d[3] + 1;
			}

			if (atoi(s1.c_str()) == 4) {
				e[3] = e[3] + 1;
				if (atoi(s2.c_str()) == 1)
					f[0] = f[0] + 1;
				if (atoi(s2.c_str()) == 2)
					f[1] = f[1] + 1;
				if (atoi(s2.c_str()) == 3)
					f[2] = f[2] + 1;
				if (atoi(s2.c_str()) == 4)
					f[3] = f[3] + 1;
			}

		}
	}
	else {
		cout << "h" << endl;
	}
	for (int j = 0; j < 4; j++) {
		cout << "( " << m[j] << "," << n[j] << " )" << double(n[j])/m[0]<<" ";
	}
	cout << endl;
	for (int j = 0; j < 4; j++) {
		cout << "( " << p[j] << "," << q[j] << " )" << double(q[j]) / p[1] << " ";
	}
	cout << endl;
	for (int j = 0; j < 4; j++) {
		cout << "( " << c[j] << "," << d[j] << " )" << double(d[j]) / c[2] << " ";
	}
	cout << endl;
	for (int j = 0; j < 4; j++) {
		cout << "( " << e[j] << "," << f[j] << " )" << double(f[j]) / e[3] << " ";
	}
	cout << endl;
	return 0;
}
