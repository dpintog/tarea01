#include <iostream>
#include <math.h>
#include <iomanip>

//declaración de variables
float F1 (int);
float F2 (int);
float f1 (int);
float f2 (int);
float a=1.0;
float b=1.0;

// main
int main() 
{
  float cons=10.0;
  float result1=0.0;
  float resultf1=0.0;
  float result2=0.0;
  float resultf2=0.0;
std::cout<<std::fixed<<std::setw(2)<<"No"<< "\t"<< std::setw(8) << "valor C"<< "\t"<<"\t"<<"[x raiz+]" << "\t"<<"\t"<< "[x raiz-]"<< "\t"<< "[x' raiz+]"<<"\t"<< "\t"<< "[x' raiz-]"<< "\n";

  
  for(int ii = 0.0; ii <= 10.0; ++ii)
    {
      cons= (std::pow(10.0,-ii));
      result1= F1(ii);
      resultf1=f1(ii);
      result2= F2(ii);
      resultf2= f2(ii);
    if (ii==0.0){

      
       std::cout<<std::fixed<<std::setw(2)<<ii<< "\t"<< std::setw(8)<<std::setprecision(6)  <<  std::setfill('0') << cons<< "\t"<<"\t"<<"complejo" << "\t"<<"\t"<< "complejo"<< "\t"<< "complejo"<<"\t"<<"\t"<< "complejo"<< "\n";
    }
      
      else{
        std::cout<<std::fixed<<std::setw(2)<<ii<< "\t"<< std::setw(8)<<std::setprecision(6)  <<  std::setfill('0') << cons<< "\t"<<"\t"<<result1 << "\t"<<"\t"<< resultf1<< "\t"<< result2<<"\t"<<"\t"<< resultf2<< "\n";
      }
    
    }
  return 0;
}
//std::cout << std::fixed << std::setw(11) << std::setprecision(6)  << std::setfill('0') << my_double;
//funciones x_12

//funcion x_12 para raiz positiva
float F1(int n)
{
 float raiz=0.0;
 float rest=0.0;
 float fun= 0.0;
 float c=10.0;
  c= (std::pow(10.0,-n));
  rest= (b*b)-4.0*a*c;
  raiz= (std::pow(rest,0.5));
  fun= (-b+raiz)/(2.0*a);
    return fun;
}
//funcion x_12 para raiz negativa
float f1(int n)
{
 float raiz=0.0;
 float rest=0.0;
 float fun= 0.0;
 float c=10.0;
  c= (std::pow(10.0,-n));
  rest= (b*b)-4.0*a*c;
  raiz= (std::pow(rest,0.5));
  fun= (-b-raiz)/(2.0*a);
    return fun;
}
//funciones x'_12

//funcion x'_12 para raiz positiva
float F2(int n)
{
 float raiz=0.0;
 float rest=0.0;
 float fun= 0.0;
 float c=10.0;
  c= (std::pow(10.0,-n));
  rest= (b*b)-4.0*a*c;
  raiz= (std::pow(rest,0.5));
  fun= (-2*c)/(b+raiz);
    return fun;
}
//funcion x'_12 para raiz negativa
float f2(int n)
{
 float raiz=0.0;
 float rest=0.0;
 float fun= 0.0;
 float c=10.0;
  c= (std::pow(10.0,-n));
  rest= (b*b)-4.0*a*c;
  raiz= (std::pow(rest,0.5));
  fun= (-2*c)/(b-raiz);
    return fun;
}