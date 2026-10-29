#include<unistd.h> //importing syscall lib

int main (void){
   char buffer[20];
   read(0,buffer,10);
   write(1,buffer,10);
   return 0;

}



