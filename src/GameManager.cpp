#include "GameManager.h"


void GameManager::readDataFromFile(){ // read all datas about all stages from file

   int datafile = open("datafile.txt",O_RDWR | O_APPEND,0644); 

   // should read all stages 
   
   // each stage consists of one Map and several obstructs
   // read Map datas first
   // consists of MAXROW * MAXCOL character datas
   
   // each stage has different number of Obstructs
   // each Obstruct data has their first xpos,ypos and their pattern datas

   




}


void GameManager::init(){
   system("clear");
   gotoxy(1,1);
   cout << "hello treasure hunt!" << endl;

   readDataFromFile();

   testObs.addMotion(5000,5000,1,20);
   testObs.addMotion(10000,10000,3,20);

   testObs.draw();

   testObs2.addMotion(7000,7000,2,15);
   testObs2.addMotion(10000,10000,0,15);

   testObs2.draw();
}


void GameManager::playGame(Character& hero){

  while(1){
    
     testObs.move();
     testObs2.move();

     if(_kbhit()){
          int ch = _getch();
	  _putch(ch);

	 if(ch == 'c')
	    break;

	  if (ch == '\033'){
	     ch = _getch();
	  switch(_getch()){
 	    
	     case 'A': //up
  	   	//  cout << "up" << endl;
		  hero.move(hero.getXpos(),hero.getYpos()-1);
		  break;
	     case 'B': //down
               //   cout << "down" << endl;
		  hero.move(hero.getXpos(),hero.getYpos()+1);
  		  break;
	     case 'C': //right
		 //cout << "right" << endl;
		  hero.move(hero.getXpos()+1,hero.getYpos());
		  break;
	     case 'D': //left
		 //cout << "left" << endl;
	   	  hero.move(hero.getXpos()-1,hero.getYpos());
		  break;
	   }
	  }

     }

  }     

  close_keyboard();
}


void GameManager::gameEnd(){

  //system(cmd); 

  

}
