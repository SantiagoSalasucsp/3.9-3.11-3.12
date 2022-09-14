#include <iostream>
#include <string>
using namespace std;
class MotorVehicle
{
  private:
    string marca;
    string combustible;
    string color;
    int motor;
    int tiempo;
  public:
    MotorVehicle(string _marca, string _combustible, string _color, int _motor, int _tiempo){
  _marca=marca;
  _combustible;
  _color;
  _motor;
  _tiempo;
    };
    void setmarca(string _marca)
      {marca=_marca;}
      getmarca() const
      {retutn marca;};
    void setcombustible(string _combustible)
      {combustible=_combustible}
      getcaombustible() const
      {return combustible;};
    void setcolor(string _color)
      {color=_color}
      getcolor() const
      {return color;};
    void setmotor(int _motor)
      {motor=_motor}
      getmotor() const
    void settiempo(int _tiempo)
      {tiempo=_tiempo}
      gettiempo() const};

int main() {
  cin>> marca;
  cin>>combustible;
  cin>>color;
  cin>>motor;
  cin>>tiempo;

  cout<<"La marca es:"<<marca<<endl;
  cout<<"El combustible es:"<<combustible<<endl;
  cout<<"El color es:"<<color<<endl;
  cout<<"El motor es:"<<motor<<endl;
  cout<<"Años:"<<tiempo<<endl;
