#include <iostream>
using namespace std;
class point{
public:
  static int n;
  point(){
    ++n;
  }
  ~point(){
    --n;
  }
  static int getN(){
    return n;
  }
};
int point::n=0;
int main(){
  point a;
  point b[5];
  point* c= new point;
  cout<<a.getN()<<"\n";
  delete c;
  cout<<point::n<<"\n";
  return 0;
}
