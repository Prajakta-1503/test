#include<iostream>
using namespace std;
class Cdate {
	int dd, mm, yy;
	public:
		Cdate(int , int, int);
		void display() const;
		void setDd(int);
		int getMm() const;
		
};
Cdate :: Cdate(int d, int m, int y) {
	
	cout <<"Accept the date:\n";
	dd = d;
	mm = m;
	yy = y;
	cin>>dd>>mm>>yy;
	
}
void Cdate :: display()const{
	cout <<"display the date:\n";
	cout<<dd<<"/"<<mm<<"/"<<yy;
	
}
void Cdate :: setDd(int d){
	dd = d;
}
int Cdate :: getMm()const{
	return mm;
}
int main(){
	const Cdate c1(23,9,25);

	c1.display();

	cout<<"Month is"<<c1.getMm();

}