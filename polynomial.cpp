class Polynomial{
	int degree;
	int *coeff;
	public:
	Polynomial(){
		degree=0;
		coeff=NULL;
	}
	void setCoefficient(int deg,int cof){
		if(deg>degree){
			int *temp=new int[deg+1];
			for(int i=0;i<=deg;i++){
				temp[i]=0;
			}
			temp[deg]=cof;
			for(int i=0;i<=degree;i++){
				temp[i]=coeff;
			}
			delete [] coeff;
			this->coeff=temp;
			this->degree=deg;
		}else{
			coeff[deg]=cof;
		}
	}
	Polynomial add(Polynomial A){
		Polynomial temp;
		if(this->degree>A.degree)
			temp.degree=this->degree;
		else
			temp.degree=A.degree;
		
		temp.coeff=new int[temp.degree+1];
		for(int i=0;i<temp.degree+1;i++){
			temp.coeff[i]=0;
		}
		int i;
		while(i<=this->degree&&i<=A.degree){
			temp.coeff[i]=this->coeff[i]+A.coeff[i];
			i++;
		}
		while(i<=A.degree){
			temp.coeff[i]=A.coeff[i];
			i++;
		}
		while(i<=this->degree){
			temp.coeff[i]=this->coeff[i];
			i++;
		}
		return temp;
	}
	Polynomial subtract(Polynomial A){
		Polynomial temp;
		if(this->degree>A.degree)
			temp.degree=this->degree;
		else
			temp.degree=A.degree;
		
		temp.coeff=new int[temp.degree+1];
		for(int i=0;i<temp.degree+1;i++){
			temp.coeff[i]=0;
		}
		int i;
		while(i<=this->degree&&i<=A.degree){
			temp.coeff[i]=this->coeff[i]-A.coeff[i];
			i++;
		}
		while(i<=A.degree){
			temp.coeff[i]=0-A.coeff[i];
			i++;
		}
		while(i<=this->degree){
			temp.coeff[i]=this->coeff[i];
			i++;
		}
		return temp;
	}
	Polynomial multiply(Polynomial A){
		Polynomial temp;
		temp.degree=(this->degree+A.degree);
		temp.coeff=new int[temp.degree+1];
		for(int i=0;i<=temp.degree;i++){
			temp.coeff[i]=0;
		}
		for(int i=0;i<this->degree;i++){
			for(int j=0;j<A.degree;j++){
				temp.coeff[i+j]+=this->coeff[i]*A.coeff[j];
			}
		}
		return temp;
	}
	void print(){
		for(int i=0;i<=this->degree;i++){
			if(coeff[i]!=0)
				cout<<this->coeff[i]<<"x"<<i<<" ";
		}
	}
};
