#include <iostream>
#include <string>
using namespace std;
class fecha{
  private:
    int dia;
    int mes;
    int year;
  public:
    fecha(int _dia, int _mes, int _year)
      {_dia=dia;
      if (mes<=12 || mes>=1)
        {mes=_mes;}
      year=_year}
    void setdia(int _dia)
    int getdia() const { return dia;};

    void set mes(int _mes)
    {if (_mes<=12 && -mes>=1)
      {mes=_mes;}}
    int get mes() const {return mes;};
    void getyear(int _year){year=_year;}
};

int main() {
  cout<<"Ingrese un día";
  cin>>dia;
  cout<<"Ingrese un mes";
  cin>>mes;
  if !( mes<=12 && mes>=1)
    {cout<<"Ese mes no es numeor valido"}
  cout<<"Ingrese un año";
  cin>>year;
  cout<<dia<<"/"<<mes<<"/"<<year<<endl;
}
    
