#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int i = 0;
double s[3] = {};

double courseAve(vector<vector<double> >cAve)
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			if (j == 0)
				s[0] += cAve[i][j];
			else if (j == 1)
				s[1] += cAve[i][j];
			else if (j == 2)
				s[2] += cAve[i][j];
		}
	}
	return s[3];
}

double stuAve(vector<vector<double> >stuarr)
{
	double sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += stuarr[i][j];	
		}
		i++;
		return sum/3;
}

int main()
{
	double stu0[5][3] = {
		{80.0,70.0,90.0},
		{ 85.0,77.0,95.0 },
		{ 83.0,75.0,70.0 },
		{ 73.0,95.0,67.0 },
		{ 88.0,79.0,71.0 },
	};
	vector<vector<double> > stu(5);
	for (int i = 0; i < 5; i++) {
		stu[i] = vector<double>(3);
		for (int j = 0; j < 3; j++) {
			stu[i][j]=stu0[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			cout << fixed << setprecision(1) << stu[i][j] << ", ";
		}
		cout << stuAve(stu);
		cout << endl;
	}
	courseAve(stu);
	cout << "Average: ";
	for (int i = 0; i < 3; i++) {
		cout << s[i]/5;
		if (i < 2)
			cout << ", ";
	}
	system("pause");
}
