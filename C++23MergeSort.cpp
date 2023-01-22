#include <iostream>
using namespace std;
void tri(int *t,int d,int f,int n){
	if (n != 1) {
		tri(t, f - n / 2, f,n/2);
		tri(t, d, f - n / 2, n - n / 2);
		for (int i = d+1; i < f; i++) {
			int var = t[i];
			int j = i;
			while (j > d && t[j - 1] > var) {
				t[j] = t[j - 1];
				j -= 1;
			}
			t[j] = var;
		}
	}
}
int main() {
	int t[] = {2,5,0,-2,7,0,6,3,1,4};
	int d[] = { 38,27,43,3,9,82,10 };
	tri(t,0,10 ,10);
	for (int i = 0; i < 10; i++) {
		cout << t[i] << "|";
	}
	return  0;
}
