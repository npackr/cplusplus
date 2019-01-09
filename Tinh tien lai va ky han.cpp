#include <iostream>
#include <cmath>
using namespace std;

float TinhLaiDon(int goc, int kyvong, double laisuat);
float TinhLaiKep(int goc, int kyvong, double laisuat);

int main() {
	int goc, kyvong;
	double laisuat;
	
	cout<<"Nhap so tien ban dang co (don vi: trieu dong): ";
	cin>>goc;
	cout<<endl;
	cout<<"Nhap lai suat (%/nam): ";
	cin>>laisuat;
	cout<<endl;
	cout<<"Nhap so tien ban ky vong (don vi: trieu dong): ";
	cin>>kyvong;
	cout<<endl;
	
	cout<<"Ky han gui de dat duoc "<<kyvong<<" trieu dong la:"<<endl;
	cout<<TinhLaiDon(goc, kyvong, laisuat)<<" nam (neu bang hinh thuc lai don)."<<endl;
	cout<<TinhLaiKep(goc, kyvong, laisuat)<<" nam (neu bang hinh thuc lai kep).";
	return 0;
}

float TinhLaiDon(int goc, int kyvong, double laisuat) {
	return (kyvong/goc-1)/(laisuat/100);
}

float TinhLaiKep(int goc, int kyvong, double laisuat) {
	return log(kyvong/goc)/log(1.0+(laisuat/100));
}
