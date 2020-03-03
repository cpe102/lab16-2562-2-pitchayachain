#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}
vector<int> randomVector(int N){
vector<int> x(N);
for (int i = 0; i < N; i++)
{
	x[i] = rand()%10;
}
	return x;
}
void showVector(vector<int> y){
cout << "[";
 for (unsigned int i = 0; i < y.size(); i++)
 {
	 cout << y[i] << " ";
 }
 cout << "]";
}
int dotProduct(vector<int> A,vector<int> B){
int sum = 0;
for (int i = 0; i < A.size(); i++)
{
	sum+=A[i]*B[i];
}
return sum;
}