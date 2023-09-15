#include <iostream>
using namespace std;
int sizeofpopulation(int p,int birth,int death,int years){
   
    int  current=p,i;
 for (i=0;i<years;i++){
    current=current +( ((current*birth)/100) - ((current*death)/100) );
	cout << "current size of year"<<i+1  <<":" << current<<"\n";
	}
}


int main(){
  int p,birth,death,years;
  cout <<"Enter population size\n";
  cin >> p;
  while(p<2){
      cout<<"starting population size should not less than 2\n";
       cout <<"Enter population size again\n";
         cin >> p;
  }
   cout <<"\nAnnual birth rate\n";
  cin >> birth;
 while(birth<0){
      cout<<"It cannot be negative\n";
       cout <<"Enter birth rate again\n";
         cin >> birth;
  }
     cout <<"\nAnnual death rate\n";
  cin >> death;
      while(death<0){
      cout<<"It cannot be negative\n";
       cout <<"Enter death rate again\n";
         cin >> death;
  }
   cout <<"\nNo of years to display\n";
  cin >> years;
      while(years<1){
      cout<<"It cannot be less than 1\n";
       cout <<"Enter years again\n";
         cin >> years;
  }
  sizeofpopulation(p,birth,death,years);
}