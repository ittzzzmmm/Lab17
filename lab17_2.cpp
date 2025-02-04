#include<iostream>
using namespace std;

void myString(char *&p,int N){
	p = new char;  //ชี้ไป address in heap  
	for(int i = 0; i < N;i++) *(p+i) = 'A'+i;  //ถ้าเป็น char มันจะอ่านจนกว่าจะเจอ 0,\0 
	*(p+N) = 0; // ใส่เพื่อหยุดการอ่าน
}

int main(){
	char *p; // สร้าง pointer p ชี้ไปที่ char (ยังไม่ชี้)
	int N;	// กำหนดความยาวม
	cout << "N = ";
	cin >> N;		
	myString(p,N); // call function
	cout << p;	
	delete [] p;
	return 0;
}
