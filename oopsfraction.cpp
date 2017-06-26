#include<iostream>
#include<stdio.h>
using namespace std;
class fraction{
	int ne;
	int de;
	public:
		fraction(){
			ne=0;de=1;
		}
		fraction(int n,int d){
			this->ne=n;
			this->de=d;
		}
		int getne(){
			return this->ne;	
		} 
		int getde(){
			return this->de;
		}
		void setne(int n){
			this->ne=n;
		}
		void setde(int d){
			this->de=d;		
		}
		void add(fraction &f1){
		
				int n= this->ne*f1.getde() + this->de*f1.getne();
				int d=this->de*f1.getde();
			this->ne=n/gcd(n,d);
			this->de=d/gcd(n,d);
		}
		
		void multiply(fraction &f1){
			int n=this->ne*f1.getne();
			int d=this->de*f1.getde();
			this->ne=n/gcd(n,d);
			this->de=d/gcd(n,d);
		}
		
		int gcd(int n,int d){
			 if (n== 0||d==0)
        		return ne;
        	if (n==d)
        		return n;
        	if (n>d)
        		return gcd(n-d,d);
        				
    		return gcd(n,d-n);
		}
		void print(){
		cout<<"b"<<endl;
			cout<<this->ne<<"/"<<this->de<<endl;
		}
		
};

int main(){
fraction f(4,6);
cout<<"a"<<endl;
fraction f1(5,3);
cout<<"a"<<endl;
f.multiply(f1);
cout<<"a"<<endl;
//f.convertfract();
cout<<"a"<<endl;
f.print();


return 0;
}
