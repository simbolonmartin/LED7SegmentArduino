
//Encoder for first digit
#define IC_D1 22
#define IC_C1 23
#define IC_B1 24
#define IC_A1 25

//Encoder input for second digit
#define IC_D2 27
#define IC_C2 28
#define IC_B2 29
#define IC_A2 30

//Encoder input for third digit
#define IC_D3 32
#define IC_C3 33
#define IC_B3 34
#define IC_A3 35
#define DP3 39

#define SWITCH_INPUT 40

int switchStatus = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(IC_D1, OUTPUT);
  pinMode(IC_C1, OUTPUT);
  pinMode(IC_B1, OUTPUT);
  pinMode(IC_A1, OUTPUT);
  
  pinMode(IC_D2, OUTPUT);
  pinMode(IC_C2, OUTPUT);
  pinMode(IC_B2, OUTPUT);
  pinMode(IC_A2, OUTPUT);
  pinMode(DP3, OUTPUT);
  

  pinMode(IC_D3, OUTPUT);
  pinMode(IC_C3, OUTPUT);
  pinMode(IC_B3, OUTPUT);
  pinMode(IC_A3, OUTPUT);

  pinMode(SWITCH_INPUT, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  switchStatus = digitalRead(SWITCH_INPUT);
  if(switchStatus == 0){ //for height
  digitalWrite(DP3, HIGH);
  printLED(1, 1);
  printLED(6, 2);
  printLED(5, 3);
    }
  else if (switchStatus == 1){ // for temperature
  digitalWrite(DP3, LOW);
  printLED(3, 1);
  printLED(6, 2);
  printLED(8, 3); 
  }

  
}


void printLED(int numberLED, int numberDigit){
  if( numberDigit == 1){
    if (numberLED == 0){
      digitalWrite(IC_D1, LOW);
      digitalWrite(IC_C1, LOW);
      digitalWrite(IC_B1, LOW);
      digitalWrite(IC_A1, LOW);
    }
    else if (numberLED == 1){
      digitalWrite(IC_D1, LOW);
      digitalWrite(IC_C1, LOW);
      digitalWrite(IC_B1, LOW);
      digitalWrite(IC_A1, HIGH);
    }
    else if (numberLED == 2){
      digitalWrite(IC_D1, LOW);
      digitalWrite(IC_C1, LOW);
      digitalWrite(IC_B1, HIGH);
      digitalWrite(IC_A1, LOW);
    }
    else if (numberLED == 3){
      digitalWrite(IC_D1, LOW);
      digitalWrite(IC_C1, LOW);
      digitalWrite(IC_B1, HIGH);
      digitalWrite(IC_A1, HIGH);
    }
    else if (numberLED == 4){
      digitalWrite(IC_D1, LOW);
      digitalWrite(IC_C1, HIGH);
      digitalWrite(IC_B1, LOW);
      digitalWrite(IC_A1, LOW);
    }
    else if (numberLED == 5){
      digitalWrite(IC_D1, LOW);
      digitalWrite(IC_C1, HIGH);
      digitalWrite(IC_B1, LOW);
      digitalWrite(IC_A1, HIGH);
    }
    else if (numberLED == 6){
      digitalWrite(IC_D1, LOW);
      digitalWrite(IC_C1, HIGH);
      digitalWrite(IC_B1, HIGH);
      digitalWrite(IC_A1, LOW);
    }
    else if (numberLED == 7){
      digitalWrite(IC_D1, LOW);
      digitalWrite(IC_C1, HIGH);
      digitalWrite(IC_B1, HIGH);
      digitalWrite(IC_A1, HIGH);
    }
    else if (numberLED == 8){
      digitalWrite(IC_D1, HIGH);
      digitalWrite(IC_C1, LOW);
      digitalWrite(IC_C1, LOW);
      digitalWrite(IC_A1, LOW);
    }
    else if (numberLED == 9){
      digitalWrite(IC_D1, HIGH);
      digitalWrite(IC_C1temp, LOW);
      digitalWrite(IC_C1, LOW);
      digitalWrite(IC_A1, LOW);
    }     
  }

else if( numberDigit == 2){
    if (numberLED == 0){
      digitalWrite(IC_D2, LOW);
      digitalWrite(IC_C2, LOW);
      digitalWrite(IC_B2, LOW);
      digitalWrite(IC_A2, LOW);
    }
    else if (numberLED == 1){
      digitalWrite(IC_D2, LOW);
      digitalWrite(IC_C2, LOW);
      digitalWrite(IC_B2, LOW);
      digitalWrite(IC_A2, HIGH);
    }
    else if (numberLED == 2){
      digitalWrite(IC_D2, LOW);
      digitalWrite(IC_C2, LOW);
      digitalWrite(IC_B2, HIGH);
      digitalWrite(IC_A2, LOW);
    }
    else if (numberLED == 3){
      digitalWrite(IC_D2, LOW);
      digitalWrite(IC_C2, LOW);
      digitalWrite(IC_B2, HIGH);
      digitalWrite(IC_A2, HIGH);
    }
    else if (numberLED == 4){
      digitalWrite(IC_D2, LOW);
      digitalWrite(IC_C2, HIGH);
      digitalWrite(IC_B2, LOW);
      digitalWrite(IC_A2, LOW);
    }
    else if (numberLED == 5){
      digitalWrite(IC_D2, LOW);
      digitalWrite(IC_C2, HIGH);
      digitalWrite(IC_B2, LOW);
      digitalWrite(IC_A2, 1);
    }
    else if (numberLED == 6){
      digitalWrite(IC_D2, LOW);
      digitalWrite(IC_C2, HIGH);
      digitalWrite(IC_B2, HIGH);
      digitalWrite(IC_A2, LOW);
    }
    else if (numberLED == 7){
      digitalWrite(IC_D2, LOW);
      digitalWrite(IC_C2, HIGH);
      digitalWrite(IC_B2, HIGH);
      digitalWrite(IC_A2, HIGH);
    }
    else if (numberLED == 8){
      digitalWrite(IC_D2, HIGH);
      digitalWrite(IC_C2, LOW);
      digitalWrite(IC_B2, LOW);
      digitalWrite(IC_A2, LOW);
    }
    else if (numberLED == 9){
      digitalWrite(IC_D2, HIGH);
      digitalWrite(IC_C2, LOW);
      digitalWrite(IC_B2, LOW);
      digitalWrite(IC_A2, LOW);
    }     
  }
else if( numberDigit == 3){
    if (numberLED == 0){
      digitalWrite(IC_D3, LOW);
      digitalWrite(IC_C3, LOW);
      digitalWrite(IC_B3, LOW);
      digitalWrite(IC_A3, LOW);
    }
    else if (numberLED == 1){
      digitalWrite(IC_D3, LOW);
      digitalWrite(IC_C3, LOW);
      digitalWrite(IC_B3, LOW);
      digitalWrite(IC_A3, HIGH);
    }
    else if (numberLED == 2){
      digitalWrite(IC_D3, LOW);
      digitalWrite(IC_C3, LOW);
      digitalWrite(IC_B3, HIGH);
      digitalWrite(IC_A3, LOW);
    }
    else if (numberLED == 3){
      digitalWrite(IC_D3, LOW);
      digitalWrite(IC_C3, LOW);
      digitalWrite(IC_B3, HIGH);
      digitalWrite(IC_A3, HIGH);
    }
    else if (numberLED == 4){
      digitalWrite(IC_D3, LOW);
      digitalWrite(IC_C3, HIGH);
      digitalWrite(IC_B3, LOW);
      digitalWrite(IC_A3, LOW);
    }
    else if (numberLED == 5){
      digitalWrite(IC_D3, LOW);
      digitalWrite(IC_C3, HIGH);
      digitalWrite(IC_B3, LOW);
      digitalWrite(IC_A3, HIGH);
    }
    else if (numberLED == 6){
      digitalWrite(IC_D3, LOW);
      digitalWrite(IC_C3, HIGH);
      digitalWrite(IC_B3, HIGH);
      digitalWrite(IC_A3, LOW);
    }
    else if (numberLED == 7){
      digitalWrite(IC_D3, LOW);
      digitalWrite(IC_C3, HIGH);
      digitalWrite(IC_B3, HIGH);
      digitalWrite(IC_A3, HIGH);
    }
    else if (numberLED == 8){
      digitalWrite(IC_D3, HIGH);
      digitalWrite(IC_C3, LOW);
      digitalWrite(IC_B3, LOW);
      digitalWrite(IC_A3, LOW);
    }
    else if (numberLED == 9){
      digitalWrite(IC_D3, HIGH);
      digitalWrite(IC_C3, LOW);
      digitalWrite(IC_B3, LOW);
      digitalWrite(IC_A3, LOW);
    }     
  }
  
  
}
