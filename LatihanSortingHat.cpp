#include <iostream>

int main(){
  int gryffindor=0;
  int hufflepuff=0;
  int ravenclaw=0;
  int slytherin=0;
  
  int answer1, answer2, answer3, answer4;
  
  int max=0;
  std::string house;
  
  std::cout<< "The Sorting Hat Quiz!\n";
  
  std::cout<<"Q1) When I'm dead, I want people to remember me as: \n";
  std::cout<<"   1) The Good \n";
  std::cout<<"   2) The Great \n";
  std::cout<<"   3) The Wise \n";
  std::cout<<"   1) The Bold \n";
  
  std::cout<<"Masukkan pilihan: \n";
  std::cin>>answer1;
  if(answer1==1){
    hufflepuff++;
    //std::cout<<"nilai Huffle = " <<hufflepuff<<"\n";
  }
  else if (answer1==2){
    slytherin++;
  }
  else if (answer1==3){
    ravenclaw++;
  }
  else if (answer1==4){
    gryffindor++;
  }
  else{
    std::cout<<"Invalid output";
  }
  std::cout<<"<-------------------------------------->\n";
  
  std::cout<<"Q2) Down or Dusk? \n";
  std::cout<<"   1) Down \n";
  std::cout<<"   2) Dusk \n";
  
  std::cout<<"Masukkan pilihan: \n";
  std::cin>>answer2;
  if(answer2==1){
    gryffindor++;
    ravenclaw++;
    //std::cout<<"nilai Huffle = " <<hufflepuff<<"\n";
  }
  else if (answer2==2){
    hufflepuff++;
    slytherin++;
  }
  else{
    std::cout<<"Invalid output";
  }
  std::cout<<"<-------------------------------------->\n";
  std::cout<<"Q3) Which kind of instrument most pleases your ear? \n";
  std::cout<<"   1) The Violin \n";
  std::cout<<"   2) The Trumpet \n";
  std::cout<<"   3) The Piano \n";
  std::cout<<"   1) The Drum \n";
  
  std::cout<<"Masukkan pilihan: \n";
  std::cin>>answer3;
  if(answer3==1){
    slytherin++;
    //std::cout<<"nilai Huffle = " <<hufflepuff<<"\n";
  }
  else if (answer3==2){
    hufflepuff++;
  }
  else if (answer3==3){
    ravenclaw++;
  }
  else if (answer3==4){
    gryffindor++;
  }
  else{
    std::cout<<"Invalid output";
  }
  std::cout<<"<-------------------------------------->\n";
  std::cout<<"Q4) Which road tempts you most? \n";
  std::cout<<"   1) The wide, sunny grassy lane \n";
  std::cout<<"   2) The narrow, dark, lantern-lit alley \n";
  std::cout<<"   3) The twisting, leaf-strewn path through woods \n";
  std::cout<<"   1) The cobbled street lined (ancient buildings) \n";
  
  std::cout<<"Masukkan pilihan: \n";
  std::cin>>answer4;
  if(answer4==1){
    hufflepuff++;
    //std::cout<<"nilai Huffle = " <<hufflepuff<<"\n";
  }
  else if (answer4==2){
    slytherin++;
  }
  else if (answer4==3){
    gryffindor++;
  }
  else if (answer4==4){
    ravenclaw++;
  }
  else{
    std::cout<<"Invalid output";
  }
  
 std::cout<<"<-------------------------------------->\n"; 
  
  
  if(hufflepuff > max){
    max=hufflepuff;
    house="Hufflepuff";
  }
  if(gryffindor > max){
    max=gryffindor;
    house="Gryffindor";
  }
  if(ravenclaw > max){
    max=ravenclaw;
    house="Ravenclaw";
  }
  if(slytherin > max){
    max=slytherin;
    house="Slytherin";
  }
  
  std::cout<<house<<"\n";
  
}
