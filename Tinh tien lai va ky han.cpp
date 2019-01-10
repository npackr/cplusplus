#include <iostream>
#include <cmath>
using namespace std;

long double TinhLaiDon(int goc, int kyvong, double laisuat);
long double TinhLaiKep(int goc, int kyvong, double laisuat);

int main() {
	int goc, kyvong;
	double laisuat;
	
	cout<<"Nhap so tien ban dang co (don vi: trieu dong): ";
	cin>>goc;
	cout<<endl;
	do {
		cout<<"Nhap lai suat (don vi: %/nam va lon hon 0): ";
		cin>>laisuat;
		cout<<endl;
		} while (laisuat <= 0);
	do {
		cout<<"Nhap so tien ban ky vong (don vi: trieu dong va lon hon so tien ban dang co): ";
		cin>>kyvong;
		cout<<endl;
		} while (goc >= kyvong);
	
	cout<<"Neu lai suat "<<laisuat<<"%/nam thi ky han gui de dat duoc "<<kyvong<<" trieu dong la:"<<endl;
	cout<<TinhLaiDon(goc, kyvong, laisuat)<<" nam (neu bang hinh thuc lai don)."<<endl;
	cout<<TinhLaiKep(goc, kyvong, laisuat)<<" nam (neu bang hinh thuc lai kep).";
	return 0;
}

long double TinhLaiDon(int goc, int kyvong, double laisuat) {
	return (kyvong/goc-1)/(laisuat/100);
}

long double TinhLaiKep(int goc, int kyvong, double laisuat) {
	return log(kyvong/goc)/log(1.0+(laisuat/100));
}
