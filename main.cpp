#include <iostream>
using namespace std;

int main(){
    int N = 0, A = 0, B = 0, MDC=0;
    std::cin >> N;
    for (int x=0; x<N;x++){
      std::cin >> A >> B;
      if (A>=1 && B<=1000){
         if (B<A){
           int aux =0;
           aux = A;
           A = B;
           B = aux;
         }
         for (int y=1;y<=1000;y++){
           if(A%y == 0 && B%y ==0){
             MDC = y;

           }

         }
      } else if (B == 0){
        MDC = A;
      }
        std::cout << MDC << std::endl;
    }

    return 0;
}