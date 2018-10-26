#include<iostream>
#include<vector>
#include<string>
using namespace std;

using MATRIX3D = vector < vector <vector <int> > >;


struct POINT3D {
	int x;
	int y;
	int z;
	int val;
};



void InitMatrix(MATRIX3D& matrix,int N) {
	
	matrix.resize(N);
	for (int x = 0; x < matrix.size(); ++x) {
		matrix[x].resize(N);
		for (int y = 0; y < matrix.size(); ++y) {
			matrix[x][y].resize(N);
			for (int z = 0; z < matrix.size(); ++z) {
				matrix[x][y][z] = 0;
			}

		}
	}
}

long Query(vector<POINT3D> &toDelete, POINT3D start, POINT3D end) {
	long sum = 0;
	POINT3D temp;
	for (int i = 0; i < toDelete.size(); ++i) {
		temp = toDelete[i];
		if ((temp.x <= end.x && temp.x >= start.x) &&
			(temp.y <= end.y && temp.y >= start.y) &&
			(temp.z <= end.z && temp.z >= start.z))
			sum += temp.val;
	}
	return sum;
}


int main() {
	int testCases;
	int N;
	int M;
	cin >> testCases;



	string operation;
	POINT3D point;
	POINT3D start, end;

	while (testCases--) {
	vector < POINT3D >toDelete;
	toDelete.reserve(100);

		cin >> N;

		cin >> M;

		while (M--) {
			cin >> operation;

			if (operation[0] == 'U') {
				cin >> point.x >> point.y >> point.z;
				cin >> point.val;

				bool flag = true;

				for (int i =0; i < toDelete.size(); ++i)
					if (toDelete[i].x == point.x &&
						toDelete[i].y == point.y &&
						toDelete[i].z == point.z) {
						flag = false;
						toDelete[i].val = point.val;
					}

				if(flag)
					toDelete.push_back(point);
			}

			else if (operation[0] == 'Q') {

				cin >> start.x >> start.y >> start.z;

				cin >> end.x >> end.y >> end.z;

				cout << Query(toDelete, start, end) << endl;
			}
		}
	}

	return 0;
}