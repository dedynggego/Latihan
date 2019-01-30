/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/
#include <iostream>
#include <stdlib.h>

int main(){
  
  int user = 0;
  int computer = rand() % 3 + 1;
  
  std::cout<< "================================\n";
  std::cout<< "       Rock Paper Scissors!\n";
  std::cout<< "================================\n";
  
  std::cout<< "1) ✊ \n";
  std::cout<< "2) ✋ \n";
  std::cout<< "3) ✌️ \n";
  
  std::cout<<"Shoot! \n";
  
  std::cout<<"Masukkan pilihan: \n";
  std::cin>>user;
  
  if(user==1){
    std::cout<<"Anda memilih ✊ \n";
  }else if(user==2){
    std::cout<< "Anda memilih ✋\n";
  }else{
     std::cout<< "Anda memilih ✌️ \n";
  }
  
  if(computer==1){
    std::cout<<"Komputer memilih ✊ \n";
  }else if(computer==2){
    std::cout<< "Komputer memilih ✋\n";
  }else{
     std::cout<< "Komputer memilih ✌️ \n";
  }
  
  
  //std::cout<<"Computer memilih "<<computer<<"\n";
  
  //user dan komputer seri
  if(user==computer){
    std::cout<<"Kalian Seri\n";
  }
  
  //user memilih batu
  else if(user==1){
    if(computer==2){
      std::cout<<"Anda kalah broo..\n";
    }if (computer==3){
      std::cout<<"Anda menang broo..\n";
    }
  }
  
  //user memilih kertas
 else if(user==2){
    if(computer==1){
      std::cout<<"Anda menang bro..\n";
    }if(computer==3){
      std::cout<<"Anda kalah bro..\n";
    }
  }
  
  //user memilih gunting
  else if(user==3){
    if(computer==1){
      std::cout<<"Anda kalah bro..\n";
    }if(computer==2){
      std::cout<<"Anda menang bro..\n";
    }
  }else{
    std::cout<<"Masukkan angka 1-3\n";
  }
  
  
}
