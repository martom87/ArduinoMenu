 
double printSomething(){
  double something = 10.0;
  return something;
  }

//sesor output can be used here
  double printSomething2(double something){
  return something;
  }

char*  printSomething3(){
    char char1= 'y';
    char char2= 'y';
    char *str = malloc(3 * sizeof(char));
    if(str == NULL) return NULL;
    str[0] = char1;
    str[1] = char2;
    return str;
  }

String printSomething4(String parameter){
return parameter;  
  }



