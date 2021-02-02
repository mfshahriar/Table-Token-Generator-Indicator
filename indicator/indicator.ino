
int buzzer=4;
void setup()

{ pinMode(A0,INPUT); //analog pins as input

pinMode(A1,INPUT);

pinMode(A2,INPUT);

pinMode(A3,INPUT);

pinMode(A4,INPUT);

pinMode(A5,INPUT);

pinMode(0,INPUT);   //digital pins as input

pinMode(1,INPUT);

pinMode(12,OUTPUT); //Digital pins as output for seven seg display

pinMode(11,OUTPUT);

pinMode(10,OUTPUT);

pinMode(9,OUTPUT);

pinMode(8,OUTPUT);

pinMode(7,OUTPUT);

pinMode(6,OUTPUT);

pinMode(5,OUTPUT);

pinMode(4,OUTPUT); // output for buzzer

// set initially display to 0

digitalWrite(12,HIGH); // seg a

digitalWrite(11,HIGH); // seg b

digitalWrite(10,HIGH); // seg c

digitalWrite(9,HIGH); //seg d

digitalWrite(8,HIGH); //seg e

digitalWrite(7,HIGH); // seg f

digitalWrite(6,LOW); //seg g // hiding the middle line causing display to show 0

digitalWrite(5,HIGH); //seg .

digitalWrite(4,LOW); // buzzer as off


}

void loop() {


int a=digitalRead(A0); // reading pin values for 8 buttons

int b=digitalRead(A1);

int c=digitalRead(A2);

int d=digitalRead(A3);

int e=digitalRead(A4);

int f=digitalRead(A5);

int g=digitalRead(0);

int h=digitalRead(1);

if(a==LOW) //if table 1 customer press button
{ 

digitalWrite(11,HIGH); // pirnt 1

digitalWrite(10,HIGH);

digitalWrite(9,LOW);

digitalWrite(8,LOW);

digitalWrite(7,LOW);

digitalWrite(6,LOW);

digitalWrite(12,LOW);

Alarm();  

} 

else if(b==LOW) //if table 2 customer press button

{ 

digitalWrite(11,HIGH); // pirnt 2

digitalWrite(12,HIGH);

digitalWrite(9,HIGH);

digitalWrite(8,HIGH);

digitalWrite(7,LOW);

digitalWrite(6,HIGH);

digitalWrite(10,LOW);

Alarm(); 

} 

else if(c==LOW)  //if table 3 customer press button

{ 

digitalWrite(11,HIGH); // pirnt 3

digitalWrite(12,HIGH);

digitalWrite(10,HIGH);

digitalWrite(9,HIGH);

digitalWrite(6,HIGH);

digitalWrite(7,LOW);

digitalWrite(8,LOW);

Alarm();

 }

else if(d==LOW)  //if table 4 customer press button

{ 

digitalWrite(11,HIGH); // pirnt 4

digitalWrite(10,HIGH);

digitalWrite(7,HIGH);

digitalWrite(6,HIGH);

digitalWrite(8,LOW);

digitalWrite(9,LOW);

digitalWrite(12,LOW);

Alarm(); 

 }

else if(e==LOW)  //if table 5 customer press button

{ 

digitalWrite(10,HIGH); // pirnt 5

digitalWrite(12,HIGH);

digitalWrite(9,HIGH);

digitalWrite(7,HIGH);

digitalWrite(6,HIGH);

digitalWrite(11,LOW);

digitalWrite(8,LOW);

Alarm(); 

 }

else if(f==LOW)  //if table 6 customer press button

{ 
digitalWrite(10,HIGH); // pirnt 6

digitalWrite(12,HIGH);

digitalWrite(9,HIGH);

digitalWrite(8,HIGH);

digitalWrite(7,HIGH);

digitalWrite(6,HIGH);

digitalWrite(11,LOW); 

Alarm(); 

}

else if(g==LOW)  //if table 7 customer press button

{ 
digitalWrite(10,HIGH); // pirnt 7

digitalWrite(12,HIGH);

digitalWrite(9,LOW);

digitalWrite(8,LOW);

digitalWrite(7,LOW);

digitalWrite(6,LOW);

digitalWrite(11,HIGH);

Alarm(); 


}

else if(h==LOW)  //if table 8 customer press button

{ 

digitalWrite(10,HIGH); // pirnt 8

digitalWrite(12,HIGH);

digitalWrite(9,HIGH);

digitalWrite(8,HIGH);

digitalWrite(7,HIGH);

digitalWrite(6,HIGH);

digitalWrite(11,HIGH);

Alarm(); 

}

}

void Alarm()        
{
 
    digitalWrite(4,HIGH); //the buzzer sound
    tone(buzzer,261,100); //Frequency of SA
    delay(200);

     tone(buzzer,293,100); //Frequency of RE

     delay(200);
  
    digitalWrite(4,LOW);  //without sound
    //when delay time changed,the frequency changed
  
}
