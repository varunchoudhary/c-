#include<iostream>
using namespace std;
/*void q(int z){
	z+=z;
	cout<<z<<" ";
}
void p(int *y){
	int x=*y+2;
	q(x);
	*y=x-1;
	cout<<x<<" ";
}*/
int f(int x,int *py,int **ppz){
	int y,z;
	**ppz+=1;
	z=**ppz;
	cout<<z<<endl;
	*py+=2;
	y=*py;
	cout<<y<<" "<<z<<endl;
	x+=3;
	cout<<x<<" "<<y<<" "<<z<<endl;
	return x+y+z;
}
int main()
{
int c,*b,**a;
c=4;
b=&c;
a=&b;
cout<<f(c,b,a);
return 0;
}
