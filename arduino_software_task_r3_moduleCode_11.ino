// C++ code
//
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
int pin7 = 7;
int pin8 = 8;
int pin9 = 9;
int pin10 = 10;
int pin11 = 11;

int potenValue = 0;
int ones = 0;
int tens = 0;

void setup()
{
  
  pinMode (A0, INPUT);

  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  
}


void loop()  
{
 
  Serial.begin(9600);
  
  potenValue = analogRead(A0);
  
  delay(100);
  
  int readValue = potenValue / 10;
  
  if (readValue > 99) {
	readValue = 99;  	
    
  }  
  
  tens = readValue / 10 % 10;
  ones = readValue % 10;
  
  Serial.println(F("The potentiometer input is ")); //prints out potentiometer input (for tracking progress)
  Serial.println(potenValue); 
  
  Serial.println(" ");
  
  Serial.println(F("The value used for the display output is ")); //prints out value used for slicing the tens and ones digit (for tracking progress)
  Serial.println(readValue);  
  
  Serial.println(F("Ones digit: ")); //prints out ones digit of readValue (used for first display)
  Serial.println(ones);       
  
  Serial.println(" ");
  
  Serial.println(F("Tens digit: ")); //prints out tens digit of readValue (used for second display)
  Serial.println(tens);     
  
  Serial.println(" ");        //for organization
  
  for (int i = 0; i < 1024; i++){
	
    if (tens == 0){
      
      //displays number 0 in the tens display (left one)
      digitalWrite(pin8, LOW);
      digitalWrite(pin9, LOW);
      digitalWrite(pin10, LOW);
      digitalWrite(pin11, LOW);
      
      //calls function to display ones digit 
      onesDigit(ones);
    }   
    
    else if (tens == 1){
      
      //displays number 1 in the tens display (left one)
      digitalWrite(pin8, HIGH);
   	  digitalWrite(pin9, LOW);
      digitalWrite(pin10, LOW);
      digitalWrite(pin11, LOW);
      
      
      //calls function to display ones digit 
      onesDigit(ones);
  
    }
    
     else if (tens == 2){
      
      //displays number 2 in the tens display (left one)
      digitalWrite(pin8, LOW);
   	  digitalWrite(pin9, HIGH);
      digitalWrite(pin10, LOW);
      digitalWrite(pin11, LOW);
       
      //calls function to display ones digit
      onesDigit(ones);
  
    }
    
     else if (tens == 3){
      
       //displays number 3 in the tens display (left one)
      digitalWrite(pin8, HIGH);
   	  digitalWrite(pin9, HIGH);
      digitalWrite(pin10, LOW);
      digitalWrite(pin11, LOW);
      
      //calls function to display ones digit 
      onesDigit(ones);
  
    }
    
     else if (tens == 4){
      
      //displays number 4 in the tens display (left one)
      digitalWrite(pin8, LOW);
   	  digitalWrite(pin9, LOW);
      digitalWrite(pin10, HIGH);
      digitalWrite(pin11, LOW);
      

       //calls function to display ones digit 
       onesDigit(ones);
  
    }
    
     else if (tens == 5){
      
      //displays number 5 in the tens display (left one)
      digitalWrite(pin8, HIGH);
   	  digitalWrite(pin9, LOW);
      digitalWrite(pin10, HIGH);
      digitalWrite(pin11, LOW);
       
      //calls function to display ones digit 
      onesDigit(ones);
  
    }
    
     else if (tens == 6){
       
      //displays number 6 in the tens display (left one)
      digitalWrite(pin8, LOW);
   	  digitalWrite(pin9, HIGH);
      digitalWrite(pin10, HIGH);
      digitalWrite(pin11, LOW);
      
      //calls function to display ones digit 
      onesDigit(ones);
  
    }
    
     else if (tens == 7){
      
      //displays number 7 in the tens display (left one)
      digitalWrite(pin8, HIGH);
   	  digitalWrite(pin9, HIGH);
      digitalWrite(pin10, HIGH);
      digitalWrite(pin11, LOW);
      
      //calls function to display ones digit 
      onesDigit(ones);
  
    }
    
     else if (tens == 8){
      
      //displays number 8 in the tens display (left one)
      digitalWrite(pin8, LOW);
   	  digitalWrite(pin9, LOW);
      digitalWrite(pin10, LOW);
      digitalWrite(pin11, HIGH);
      
      //calls function to display ones digit 
      onesDigit(ones);
  
    }
    
     else if (tens == 9){
      
      //displays number 9 in the tens display (left one)
      digitalWrite(pin8, HIGH);
   	  digitalWrite(pin9, LOW);
      digitalWrite(pin10, LOW);
      digitalWrite(pin11, HIGH);
      
      //calls function to display ones digit 
      onesDigit(ones);
  
    }
    
  }
}
  
void onesDigit(int& ones){
	if (ones == 0){
      	
       //displays number 0 in the ones display (right one)
       digitalWrite(pin4, LOW);
       digitalWrite(pin5, LOW);
       digitalWrite(pin6, LOW);
       digitalWrite(pin7, LOW);
      
       delay (100);
       
       //returns the process back the loop function above (without it, it would stop here)
       loop();
      }

      else if (ones == 1){
        
         //displays number 1 in the ones display (right one)
         digitalWrite(pin4, HIGH);
         digitalWrite(pin5, LOW);
         digitalWrite(pin6, LOW);
         digitalWrite(pin7, LOW);

         delay(100);
         loop();   
      }  

      else if (ones == 2){
        
         //displays number 2 in the ones display (right one)
         digitalWrite(pin4, LOW);
         digitalWrite(pin5, HIGH);
         digitalWrite(pin6, LOW);
         digitalWrite(pin7, LOW);

         delay(100); 
         loop();

      }

      else if (ones == 3){
        
         //displays number 3 in the ones display (right one)
         digitalWrite(pin4, HIGH);
         digitalWrite(pin5, HIGH);
         digitalWrite(pin6, LOW);
         digitalWrite(pin7, LOW);

         delay(100);
         loop();


      }

      else if (ones == 4){
        
         //displays number 4 in the ones display (right one)
         digitalWrite(pin4, LOW);
         digitalWrite(pin5, LOW);
         digitalWrite(pin6, HIGH);
         digitalWrite(pin7, LOW);

         delay(100);
         loop();


      }

      else if (ones == 5){
        
         //displays number 5 in the ones display (right one)
         digitalWrite(pin4, HIGH);
         digitalWrite(pin5, LOW);
         digitalWrite(pin6, HIGH);
         digitalWrite(pin7, LOW);

         delay(100);
         loop();

      }

      else if (ones == 6){
        
         //displays number 6 in the ones display (right one)
         digitalWrite(pin4, LOW);
         digitalWrite(pin5, HIGH);
         digitalWrite(pin6, HIGH);
         digitalWrite(pin7, LOW);

         delay(100);
         loop();

      }

      else if (ones == 7){
         
         //displays number 7 in the ones display (right one)
         digitalWrite(pin4, HIGH);
         digitalWrite(pin5, HIGH);
         digitalWrite(pin6, HIGH);
         digitalWrite(pin7, LOW);

         delay(100);
         loop();

      }

      else if (ones == 8){
        
         //displays number 8 in the ones display (right one)
         digitalWrite(pin4, LOW);
         digitalWrite(pin5, LOW);
         digitalWrite(pin6, LOW);
         digitalWrite(pin7, HIGH);

         delay(100);
         loop();

      }

      else if (ones == 9){
        
         //displays number 9 in the ones display (right one)
         digitalWrite(pin4, HIGH);
         digitalWrite(pin5, LOW);
         digitalWrite(pin6, LOW);
         digitalWrite(pin7, HIGH);

         delay(100);
         loop();

      }
  
}
