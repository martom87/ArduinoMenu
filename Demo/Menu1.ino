_menu *r,*konfiguracja, *iloscWejsc,*wejsc1,*wejsc2,*wejsc3,*wejsc4,*wejsc5,*wejsc6,*wejsc7,*wejsc8,*wejscia; 
 int mem;

void makeMenu1(){

  menu1.begin(&lcd,16,2);
  Serial.begin(9600);
  menu1.begin(&lcd, 20, 4); //declare lcd object and screen size to menwiz lib
  mem=menu1.freeRam();
    // root
 r = menu1.addMenu(MW_ROOT, NULL, F("Root"));
 
 konfiguracja=menu1.addMenu(MW_SUBMENU,r,F("OPCJE WEJSC"));
 wejscia=menu1.addMenu(MW_SUBMENU,r,F("WEJSCIA"));





 
 iloscWejsc=menu1.addMenu(MW_SUBMENU,konfiguracja, F("ILOSC WEJSC"));
 
 wejsc2=menu1.addMenu(MW_VAR,iloscWejsc, F("DWA"));
 wejsc4=menu1.addMenu(MW_VAR,iloscWejsc, F("CZTERY"));
 wejsc6=menu1.addMenu(MW_VAR,iloscWejsc, F("SZESC"));
 wejsc8=menu1.addMenu(MW_VAR,iloscWejsc, F("OSIEM"));



     

 
                       
 //led1=menu1.addMenu(MW_VAR,leds,F("LED1"));
 //led1->addVar(MW_ACTION,turnLedOn);
 //led1->setBehaviour(MW_ACTION_CONFIRM,false);   
                        
 //led2=menu1.addMenu(MW_VAR,leds,F("LED2")); 
 //led2->addVar(MW_ACTION,turnLedOn3);
 //led2->setBehaviour(MW_ACTION_CONFIRM,false);                          
                        

menu1.navButtons(UP_BOTTON_PIN, DOWN_BOTTON_PIN, LEFT_BOTTON_PIN, RIGHT_BOTTON_PIN, ESCAPE_BOTTON_PIN,
                    CONFIRM_BOTTON_PIN);

menu1.addUsrScreen(displayUserScreen,5000);

sprintf(menu1.sbuf,"WITAMY");
menu1.addSplash((char *) menu1.sbuf, 5000);
  
  }

