String nameg = printSomething4("duupa");
char*  name   = nameg.c_str();


void displayUserScreen(){
  static  char buf[7];
  strcpy(menu1.sbuf,"User screen :") ;strcat(menu1.sbuf,itoa((double)(printSomething2(10.00)),buf,10));//1st lcd line
  strcat(menu1.sbuf,"\ntemperatura (C): ");strcat(menu1.sbuf,itoa((int)(millis()/1000),buf,10));//2nd lcd line
  strcat(menu1.sbuf,"\nWilgotnosc  : ");strcat(menu1.sbuf,itoa((int)menu1.freeRam(),buf,10));//3rd lcd line
  strcat(menu1.sbuf,"\nMENU ->"); strcat(menu1.sbuf, name);   

  menu1.drawUsrScreen(menu1.sbuf);
  }




