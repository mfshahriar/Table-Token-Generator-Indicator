

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
String  str1="";

void setup() {

  pinMode(A0,INPUT); 
  
  pinMode(A1,INPUT);

  pinMode(A2,INPUT);

  pinMode(A3,INPUT);

  pinMode(A4,INPUT);

  pinMode(A5,INPUT);

  pinMode(0,INPUT); 

  pinMode(1,INPUT);

  pinMode(13,INPUT);

  

  
  
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

}

void loop() {


int a=digitalRead(A0); // reading pin values for 8 buttons for table and 1 for deque

int b=digitalRead(A1);

int c=digitalRead(A2);

int d=digitalRead(A3);

int e=digitalRead(A4);

int f=digitalRead(A5);

int g=digitalRead(0);

int h=digitalRead(1);

int i=digitalRead(13);

if(a==LOW)
  {
    str1=str1+1;
    delay(300);
  }

  else if(b==LOW)
  {
    str1=str1+2;
    delay(300);
  }

  else if(c==LOW)
  {
    str1=str1+3;
    delay(300);
  }

  else if(d==LOW)
  {
    str1=str1+4;
    delay(300);
  }

  else if(e==LOW)
  {
    str1=str1+5;
    delay(300);
  }

  else if(f==LOW)
  {
    str1=str1+6;
    delay(300);
  }

  else if(g==LOW)
  {
    str1=str1+7;
    delay(300);
  }

  else if(h==LOW)
  {
    str1=str1+8;
    delay(300);
  }
  else if(i==LOW){
    str1.remove(0,1);
    delay(200);
    lcd.clear();
    
    }
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  lcd.print("Queue: ");
  lcd.setCursor(0, 1);
  lcd.print(str1);
}
